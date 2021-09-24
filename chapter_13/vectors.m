
t = 0:100*pi; 
plot3(cos(t) .* sin(2*t), sin(t) .* sin(2*t), cos(2 * t))
title('Hello') %creates plot title
xlabel('sin(t)') %creates x label
ylabel('cos(t)') %creates y label
zlabel('t') %creates t label
pause(100)
grid on %dashed grids


