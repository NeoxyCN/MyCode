[X,Y]=meshgrid(-2:.2:2);
Z=X.*exp(-X.^2-Y.^2);
surf(X,Y,Z);
colormap(hsv);
colorbar('vert');
xlabel('X-axis');
ylabel('Y-axis');
zlabel('Z-axis');