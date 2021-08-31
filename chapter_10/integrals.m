1;



[area,ierr,nfun,err] = quad(@(t) (sqrt(2 + 2*e^(-2*t))),0,2);
[area2,ierr,nfun,err] = quad(@(t) (sqrt((1-2*cos(t))^2 + (2*sin(t))^2)),0,4*pi);
[area3,ierr,nfun,err] = quad(@(t) (2*pi*t*cos(t)*sqrt((t*cos(t) + sin(t))^2 + (-t*sin(t) + cos(t))^2)),0,pi/2);
[area4,ierr,nfun,err] = quad(@(t) (2*pi*e^(-t)*sqrt((1 + e^t)^2 + (e^(-t))^2)),0,1);


printf("%f\n",area); 
printf("%f\n",area2); 
printf("%f\n",area3); 
printf("%f\n",area4); 


