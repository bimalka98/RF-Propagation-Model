%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% ============= Modelling the RF Propagation Model ==============
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Initialization
clear; close all; clc

%% ===  Free Space Path Loss and Frequency ====

%Printing the equation to be plotted
fprintf('L_{dB}(f_{GHz})= +112.44778322+20.log_{10}(f_{GHz})\n');
fprintf('Plotting  ...\n')

%Defining the frequency range in GigaHertz
f_GHz = 10:1000;
%Free Space Path Loss Model obtained from calculations
freeSpaceLoss = 112.44778322 + 20*log10(f_GHz);

% Plotting Data
figure;
loglog(f_GHz,freeSpaceLoss, 'r', 'LineWidth', 2);
%plot(f_GHz,L_dB, 'r', 'LineWidth', 2);
grid on;
xlabel('Frequency in GHz');
ylabel('Free Space Path Loss in dB');
title('Free Space Path Loss');
legend('FSL')

hold on;

fprintf('Program paused. Press enter to continue.\n');
pause;

%% ===  Rain Attenuation and Frequency ====

range = 10e3;  % Distance between transmitter and receiver in meteres
rainrate = 20; % Rain rate in mm/h
elev = 0;      % Elevation angle of the propagation path
tau = 0;       % Polarization tilt angle of the signal

% Defining the frequency range in Hertz
freq = f_GHz*1e9;
% calculating Rain Attenuation
rainAttenuation = rainpl(range,freq,rainrate,elev,tau);

% Plotting Data
%figure;
%plot(f_GHz,rainAttenuation);
loglog(f_GHz,rainAttenuation);
grid on;
xlabel('Frequency in GHz');
ylabel('Rain Attenuation in dB')
title('Rain Attenuation for Horizontal Polarization');

fprintf('Program paused. Press enter to continue.\n');
pause;

%% ===  Fog Attenuation and Frequency ====

temp = 31;  % Ambient Temperature in celcious
dens = 0.5; % Liquid Water Density in g/m^3

% calculating Fog Attenuation
fogAttenuation = fogpl(range,freq,temp,dens);

% Plotting Data
%figure;
%plot(f_GHz,fogAttenuation);
loglog(f_GHz,fogAttenuation);
grid on;
xlabel('Frequency in GHz');
ylabel('Fog Attenuation in dB')
title('Fog Attenuation');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% ===  Atmospheric Gases Attenuation and Frequency  ====

temp = 15;      % Ambient Temperature in celcious
rou = 4.85;     % Water Vapor Density in g/m^3
p =  101325;    % Atmospheric Pressure in Pa

% calculating Fog Attenuation
gasAttenuation = gaspl(range,freq,temp, p, rou);

% Plotting Data
%figure;
%plot(f_GHz,gasAttenuation);
loglog(f_GHz,gasAttenuation);
grid on;
xlabel('Frequency in GHz');
ylabel('Atmospheric Gases Attenuation in dB')
title('Atmospheric Gases Attenuation');

fprintf('Program paused. Press enter to continue.\n');
pause;
%% === Total Path Loss in Propagation

Totalpathloss = freeSpaceLoss + rainAttenuation + fogAttenuation +gasAttenuation;
loglog(f_GHz,Totalpathloss );
grid on;