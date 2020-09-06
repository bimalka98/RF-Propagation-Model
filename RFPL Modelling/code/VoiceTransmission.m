%% ==Transmitting a voice signal over a noisy channel ==%%

%% Initialization
clear; close all; clc
%% == Properties of the Voice signal ==
%Loading a voice with sampling rate 8000 Hz
[snd,fs] = audioread('voice.wav');

%Duration of voice
time = linspace(0, length(snd)/fs, length(snd));

%Normalizing the signal
Xt= snd/max(abs(snd));

fprintf('Playing the Normalized Voice clip...\n')
sound(Xt, fs);
fprintf('Program paused. Press enter to continue.\n');
pause;

%Time domain display
fprintf('Plotting Time domain Normalized voice...\n')
figure;
subplot(2,1,1); plot(time,Xt);grid on;
xlabel('Time (s)');
ylabel('Amplitude');
title('Audio Signal (Time domain)');

%Ferquency domain display
fprintf('Plotting Frequency domain voice...\n')
Xf = abs(fft(Xt));
subplot(2,1,2); plot(Xf);
xlabel('Frequency (Hz)');
ylabel('Magnitude');
title('Audio Signal (Ferequency domain)');

%% == Properties of the Carrier Signal ==

%Carrier Properties
CFreq = 50e9;
u = 0.8;
CAmp = 1;

carrier = CAmp*cos(2*pi*CFreq*time);
figure;
subplot(2,1,1); plot(time , carrier);
xlabel('Time (s)');
ylabel('Amplitude');
title('Carrier Signal (Time domain)');

subplot(2,1,2); plot(abs(fft(carrier)));
xlabel('Frequency');
ylabel('Magnitude');
title('Carrier Signal (Ferequency domain)');

%% == AM Modulating ==

ModSignal = carrier .*(1 + u*Xt);

% OUTPUT IN THE TIME DOAMIN
figure;
subplot(2,1,1); plot(time,ModSignal);
xlabel('Time (s)');
ylabel('Amplitude')
title('Modulated Audio signal (Time domaion) Fc = 50 GHz');

%FREQUENCY DOMAIN

Xmf = abs(fft(ModSignal));
subplot(2,1,1); plot(Xmf);
axis([12000 20000 0 10000]);
xlabel('Frequency (Hz)');
ylabel('Real Magnitude');
title('AM Modulated audio signal (Frequency Domain) Fc = 16kHz');

% % Adding Noise
% fprintf('Plotting Time domain noise corrupted voice...\n')
% Xn = Xt + 0.3*randn(size(Xt));
% subplot(2,1,2); plot(time,Xn);grid on;
% fprintf('Playing the corrupted Voice clip...\n')
% sound(Xn, fs);
% fprintf('Program paused. Press enter to continue.\n');
% pause;
