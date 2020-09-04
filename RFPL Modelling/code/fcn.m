function y = fcn(u)

%Variable Definition
f_GHz = 11;    %Carrier Frequency
freq = f_GHz*1e9*ones(size(u))' + real(u);
range = 10e3;  % Distance between transmitter and receiver in m
rainrate = 20; % Rain rate in mm/h
elev = 0;      % Elevation angle of the propagation path
tau = 0;       % Polarization tilt angle of the signal
temp = 31;     % Ambient Temperature in celcious
dens = 0.5;    % Liquid Water Density in g/m^3
rou = 30.4;    % Water Vapor Density in g/m^3 
p =  101325;   % Atmospheric Pressure in Pa at sea level

freeSpaceLoss = 112.44778322 + 20*log10(freq*1e-9);
rainAttenuation = rainpl(range,freq,rainrate,elev,tau);
fogAttenuation = fogpl(range,freq,temp,dens);
gasAttenuation = gaspl(range,freq,temp, p, rou);

% Calculating total Attenuation
Totalpathloss = freeSpaceLoss + rainAttenuation + ...
                fogAttenuation +gasAttenuation;
y = Totalpathloss;