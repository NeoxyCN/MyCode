x=-3:0.01:3;
y=-2:0.01:2;
[X,Y]=meshgrid(x,y);
Z=X.*exp(-X.^2-Y.^2);
disp(Z);
surfc(X,Y,Z);
surfl(X,Y,Z);
mesh(X,Y,Z);