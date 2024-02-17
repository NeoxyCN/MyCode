close all;
clear;
clc;
R=50;
D=50;
Sigma=1;
X=-200:5:200;
Y=-200:5:200;
G=6.671e-2;
Lambda=Sigma*pi*(R^3);
Delta_G=(2*G*Lambda*D)./(X.^2+Y.^2+D^2);
figure(1);

