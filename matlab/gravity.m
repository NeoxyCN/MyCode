clear;clc;

Sigma=1;
D=100;
G=6.67*1e-2;%6.67*10^-2
R3=power(50,3);
R=50;
M=4/3*pi*R^3*Sigma;
X=-200:-5:200;
delta_g=(G*M*100)./(X.^2+D^2).^(3/2);

%disp(delta_g);
figure(1);plot(X,delta_g);
xlabel('X(m)');ylabel('重力异常\Delta G');
title('二度体重力异常图','Fontname','Monospace');