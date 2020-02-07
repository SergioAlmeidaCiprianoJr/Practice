#include <stdio.h>

double verificaEntradas(double x, double E);

int main()
{

	long long int x, E;
	scanf("%lld %lld", &x, &E);
	double a=1, b=x, iMAX=100, i=0;
	double erro = verificaEntradas(x, E);
	if(erro)
	{
		printf("Entradas invalidas\n");
		return 0;
	}

	while(1)
	{
		erro = a-b;
		if(erro<0) erro*=-1;
		if(erro<=E) break;
		
		printf("E = %lld, erro = %lld\n", E, erro);
		a = a+b/2;
		b = x/a;
		
		i++;
		if(i==iMAX) break;
	}

	if(i>iMAX)
		printf("Nao foi possivel calcular sqrt(%lld)\n", x);
	else
		printf("A raiz quadrada de %lld eh %lld, calculada em %lld iteracoes\n", x, a, i);

	return 0;
}

long long int verificaEntradas(long long int x, long long int E)
{
	if(x<=1) return 1;
	if(E<1) return 1;
	if(E>16) return 1;
	
	return 0;
}
