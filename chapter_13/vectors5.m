t = 0:1000
plot3(t, e.^(-t), 2.*t - t.^2)
plot3(t, -e.^(-t), 2 - 2.*t)
pause(100)
