1; 

function integral = simpsonsrule(f,a,b,n)
    h = (b-a)/n;
    x = linspace(a,b,n);
    x4 = 0;
    x2 = 0;
    for j = 1:2:n-1
        x4 = x4 + f(j*h);
    end

    for k = 2:2:n-1
        x2 = x2 + f(k*h);
    end

    integral = (h/3) * (f(a) + f(b) + 4*x4 + 2*x2 );

endfunction

a = simpsonsrule(@(x) (2*pi*x^5/5*sqrt(1 + x^8)), 0, 5, 10);
b = simpsonsrule(@(x) (2*pi*x*e^x*sqrt(1 + (e^x + x*e^x)^2)), 0, 1, 10);

printf("%f\n", a); 
printf("%f\n", b); 


