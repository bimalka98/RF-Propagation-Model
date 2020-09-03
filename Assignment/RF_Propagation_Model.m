%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% =============Modelling the RF Propagation Model=================
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Initialization
clear ; close all; clc

%% === Relationship between Free Space Path Loss and Frequency ====

%Printing the equation to be plotted
fprintf('L_{dB}(f_{GHz})= +112.44778322+20.log_{10}(f_{GHz})\n');
fprintf('Plotting  ...\n')

%Defining the frequency range in MegaHertz
f_GHz = 0:0.005:100;
L_dB = 112.44778322+20*log10(f_GHz);
% Plot Data
plot(f_GHz,L_dB, 'r', 'LineWidth', 2);
xlabel('Frequency in GHz');
ylabel('Free Space Path Loss in dB');


%fprintf('Program paused. Press enter to continue.\n');
%pause;
