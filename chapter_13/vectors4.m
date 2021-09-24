t = -100*pi:100*pi;
plot3((1 + cos(16*pi)) .* cos(t), (1 + cos(16*t)) .* sin(t), 1 + cos(16*t));
pause(100);
