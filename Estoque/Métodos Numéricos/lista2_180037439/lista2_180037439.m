clear all
format long
clear csc;

#---------------------------------Questão 1---------------------------------

xi = 900;
cont = 0;
erro = 1;

while (cont < 900 && erro > 0.0001)
  
  g = (0.00390802)*xi - (0.000000580195)*(xi^2) - 1;
  gLinha = (.00390802) - 2*(0.000000580195)*(xi);
  
  cont++;
  x = xi - g/gLinha;
  erro = abs((x - xi)/xi);
  xi = x;
  
end

fprintf("resposta questao 1: %f\n", x)

#---------------------------------Questão 2---------------------------------

cont = 0;
a = 0;
b = 2;
g = 1;

while (cont < 900 && g > 0.0001)
  
  x = a+b/2;
  g = 18.2*tan(x) + 1.82 - 2.1 - 0.5 * (331.24*9.8/231.04) * (1/(cos(x)*cos(x)));
  gA = 18.2*tan(a) + 1.82 - 2.1 - 0.5 * (331.24*9.8/231.04) * (1/(cos(a)*cos(a)));
  cont++;
  
  if (gA*g < 0) 
    b = x;
  else
    a = x;
  end
  
end

fprintf("resposta questao 2: %f\n", x)


