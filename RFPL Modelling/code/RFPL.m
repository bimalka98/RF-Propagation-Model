%% Initialization
clear; close all; clc
%% ===  Free Space Path Loss with Frequency ====

%Defining the frequency range in GigaHertz
f_GHz = 10:1000;
%Free Space Path Loss Model obtained from calculations
freeSpaceLoss = 112.44778322 + 20*log10(f_GHz);

% Plotting Data
figure;
loglog(f_GHz,freeSpaceLoss,  'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Free Space Path Loss in dB');
title('Free Space Path Loss');legend('FreeSpacePL');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ===  Rain Attenuation with Frequency ====

range = 10e3;  % Distance between transmitter and receiver in m
rainrate = 20; % Rain rate in mm/h
elev = 0;      % Elevation angle of the propagation path
tau = 0;       % Polarization tilt angle of the signal

% Defining the frequency range in Hertz
freq = f_GHz*1e9;
% calculating Rain Attenuation
rainAttenuation = rainpl(range,freq,rainrate,elev,tau);

% Plotting Data
figure;
loglog(f_GHz,rainAttenuation, 'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Rain Attenuation in dB')
title('Rain Attenuation for Horizontal Polarization');
legend('RainPL');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ===  Fog Attenuation with Frequency ====

temp = 31;  % Ambient Temperature in celcious
dens = 0.5; % Liquid Water Density in g/m^3

% calculating Fog Attenuation
fogAttenuation = fogpl(range,freq,temp,dens);

% Plotting Data
figure;
loglog(f_GHz,fogAttenuation, 'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Fog Attenuation in dB')
title('Fog Attenuation');legend('FogPL');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ===  Atmospheric Gases Attenuation with Frequency  ====

rou = 30.4;     % Water Vapor Density in g/m^3 
p =  101325;    % Atmospheric Pressure in Pa at sea level

% calculating Fog Attenuation
gasAttenuation = gaspl(range,freq,temp, p, rou);

% Plotting Data
figure;
loglog(f_GHz,gasAttenuation, 'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Atmospheric Gases Attenuation in dB')
title('Atmospheric Gases Attenuation');legend('GasPL');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ======== Total Path Loss with Frequency ======

% Calculating total Attenuation
Totalpathloss = freeSpaceLoss + rainAttenuation + ...
                fogAttenuation +gasAttenuation;

% Plotting Data
figure;
loglog(f_GHz, Totalpathloss,  'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Total Path Loss in dB')
title('Total Path Loss'); legend('TotalPL')

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ===== To view all losses on the same figure =====

figure;
loglog(f_GHz,freeSpaceLoss,  'LineWidth', 2); 
hold on;
loglog(f_GHz,rainAttenuation, 'LineWidth', 2);
loglog(f_GHz,fogAttenuation, 'LineWidth', 2);
loglog(f_GHz,gasAttenuation, 'LineWidth', 2);
loglog(f_GHz, Totalpathloss, 'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Path Loss in dB')
title('Propagation Losses with Frequency')
legend('FreeSpacePL','RainPL','FogPL','GasPL','TotalPL');