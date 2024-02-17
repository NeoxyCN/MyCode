[x,y]=meshgrid(-5:1:5);
z=peaks(x,y);
[xi,yi]=meshgrid(-5:0.1:5);
zi1=interp2(x,y,z,xi,yi,'linear');
zi2=interp2(x,y,z,xi,yi,'nearest');
zi5=interp2(x,y,z,xi,yi,'makima');
zi5=interp2(x,y,z,xi,yi,'spline');

subplot(2,2,1);contourf(xi,yi,zi1,10);
title('二维插值-"linear"');
subplot(2,2,2);contourf(xi,yi,zi2,10);
title('二维插值-"nearest"')
subplot(2,2,3);contourf(xi,yi,zi5,10);
title('二维插值-"makima');
subplot(2,2,4);contourf(xi,yi,zi5,10);
title('二维插值-"spline"');