1;

function y = f (x)
    y = 2 * pi * x * sqrt(1 + sec(x)^4);
endfunction

function y = g (x)
    y = 2 * pi * tan(x) * sqrt(1 + sec(x)^4);
endfunction 

function y = h (x)
    y = 2 * pi * e^(-x^2) * sqrt(1 + 4*x^2*e^(-2*x^2));
endfunction

function y = j (x)
    y = 2 * pi * x * sqrt(1 + 4*x^2*e^(-2*x^2));
endfunction

function y = k (x)
    y = 2 * pi * x * sqrt(1 + (1 + 3*x^2)^2);
endfunction

function y = l (x)
    y = 2 * pi * (x + x^3) * sqrt(1 + (1 + 3*x^2)^2);
endfunction

[area,ierr,nfun,err] = quad("f",0,3.14/3);
[area2,ierr,nfun,err] = quad("g",0,3.14/3);
[area3,ierr,nfun,err] = quad("h",-1,1);
[area4,ierr,nfun,err] = quad("j",0,1);
[area5,ierr,nfun,err] = quad("k",0,1);
[area6,ierr,nfun,err] = quad("l",0,1);
[area7,ierr,nfun,err] = quad(@(x) (2*pi*x*sqrt(1+9*x^4)), 0,1);

printf("%f\n",area); 
printf("%f\n",area2); 
printf("%f\n",area3); 
printf("%f\n",area4); 
printf("%f\n",area5); 
printf("%f\n",area6); 
printf("%f\n",area7); 


