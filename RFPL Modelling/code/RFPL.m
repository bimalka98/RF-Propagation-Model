%% Initialization
clear; close all; clc
%% ========= Free Space Propagation Loss with Frequency =========

%Defining the frequency range in GigaHertz
f_GHz = 50:1000;
%Free Space Path Loss Model obtained through calculations
freeSpaceLoss = 112.44778322 + 20*log10(f_GHz);

% Plotting Data
plotCurve(freeSpaceLoss, 'FreeSpacePL')

%% == Rain, Fog, Atmospheric Gases Attenuations with Frequency ==

freq = f_GHz*1e9;% Defining the frequency range in Hertz
range = 10e3;    % Distance between transmitter and receiver in m
rainrate = 20;   % Rain rate in mm/h
elev = 0;        % Elevation angle of the propagation path
tau = 0;         % Polarization tilt angle of the signal
temp = 31;       % Ambient Temperature in celcious
dens = 0.5;      % Liquid Water Density in g/m^3
rou = 30.4;      % Water Vapor Density in g/m^3
p =  101325;     % Atmospheric Pressure in Pa at sea level

% Calculating Attenuations
rainAttenuation = rainpl(range,freq,rainrate,elev,tau);
fogAttenuation = fogpl(range,freq,temp,dens);
gasAttenuation = gaspl(range,freq,temp, p, rou);

% Plotting Data
plotCurve(rainAttenuation, 'RainPL');
plotCurve(fogAttenuation, 'FogPL');
plotCurve(gasAttenuation, 'GasPL');

%% ============ Total Propagation Loss with Frequency ============

% Calculating Total Attenuation
Totalpathloss = freeSpaceLoss + rainAttenuation + ...
                                fogAttenuation +gasAttenuation;
% Plotting Data
plotCurve(Totalpathloss, 'TotalPL');
