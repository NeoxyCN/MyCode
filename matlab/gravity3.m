%三度体重力异常

R=50;
D=100;
Sigma=1;
X=-200:5:200;
Y=-200:5:200;
G=6.67*1e-2;
M=4/3*pi*R^3*Sigma;
delta_g=(G*M*D)./(X.^2+Y.^2+D^2).^(3/2);

surf(X,Y,delta_g);

