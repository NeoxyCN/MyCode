clear;
close all;
clc;
R=15;
r=10;
k=0.015;
B=50000;
Delta=0;
X=-40:1:40;
Y=-40:1:40;
Is={0,45,90};
I0=Is{1,1};
m0=4*pi*1e-7;
Ms=k*B/m0;
Hax=-(Miu0/2*pi)*(Ms/(X.^2+R^2).^2)*((R^2-X.^2)*cos(I0)+2*R.X*sin(I0));

