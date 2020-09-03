%% ==Transmitting a voice signal over a noisy channel ==%%

%% Initialization
clear; close all; clc
%%
%Loading a voice with sampling rate 8000 Hz
[snd,fs] = audioread('voice.wav');
fprintf('Playing the Original Voice clip\n')
sound(snd, fs);
fprintf('Program paused. Press enter to continue.\n');
pause; 

%Duration of voice
time = linspace(0, length(snd)/fs, length(snd));

%Normalizing the signal
Xt = snd/max(abs(snd));
fprintf('Playing the Normalized Voice clip...\n')
sound(Xt, fs);
fprintf('Program paused. Press enter to continue.\n');
pause;

%Adding Noise
Xn = Xt + 0.3*randn(size(Xt));
fprintf('Playing the corrupted Voice clip...\n')
sound(Xn, fs);
fprintf('Program paused. Press enter to continue.\n');
pause;


%Time domain display
fprintf('Plotting Time domain voice...\n')
%subplot(2,1,1); 
figure;
plot(time,Xt);grid on;
xlabel('Time (s)');
ylabel('Amplitude');
title('Audio Signal (Time domain)');
fprintf('Program paused. Press enter to continue.\n');
pause;

%Ferquency domain display
fprintf('Plotting Frequency domain voice...\n')
Xf = abs(fft(Xt));
%f = 0::fs;

%subplot(2,1,2);
figure;
plot(time ,Xf);
xlabel('Frequency (Hz)');
ylabel('Magnitude');
title('Audio Signal (Ferequency domain)');
%fprintf('Program paused. Press enter to continue.\n');
%pause;
