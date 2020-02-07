#include <bits/stdc++.h>
 
using namespace std;

double fib(double n);
 
int main(){
	
	double n;
	scanf("%lf", &n);

	for(double i = 0; i<n; i++) i ? printf(" %.0lf", fib(i)) : printf("%.0lf", fib(i));
	printf("\n");
	return 0;
}

double fib(double n)
{
	double fi = (1+sqrt(5))/2;
	return (pow(fi, n) - pow(1-fi, n))/sqrt(5);
}
