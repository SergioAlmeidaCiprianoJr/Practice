clear all
format long
clear csc;

x = 39;
disp('');
disp('__________________________________________________________________________');
disp('Exercicio 1');
disp('a)');

valorCalculado = 2.220344e+15
disp('');

disp('b)');

f = (exp(x) - 1)/x
erro = abs((f-valorCalculado)/valorCalculado)

disp('__________________________________________________________________________');
disp('Exercicio 2');
disp('a)');

x = -9;
f = 1 + x + (x^2)/2 + (x^3)/6
valorCalculado = -89.000000;
erro = abs((f-valorCalculado)/valorCalculado)
disp('');

disp('b)');
f = 1 + x + (x^2)/2 + (x^3)/6 + (x^4)/24 + (x^5)/120
valorCalculado = -307.700000;
erro = abs((f-valorCalculado)/valorCalculado)
disp('');


disp('c)');
f = 1 + x + (x^2)/2 + (x^3)/6 + (x^4)/24 + (x^5)/120 + (x^6)/720 + (x^7)/5040
valorCalculado = -518.589286;
erro = abs((f-valorCalculado)/valorCalculado)
disp('__________________________________________________________________________');
