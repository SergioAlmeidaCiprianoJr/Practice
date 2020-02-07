#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
char op;
double m[12][12];

int main(){
	
	scanf("%c", &op);

	for(int i = 0; i < 144; ++i)
		scanf(" %lf", &m[i/12][i%12]);
	
	double soma=0;
	for(int i=1; i<=5; i++)
		for(int j=0; j<i; j++)
			soma += m[i][j];
	
	int k = 5;
	for(int i=6; i<11; i++)
	{
		for(int j=0; j<k; j++)
			soma += m[i][j];
		k--;
	}

	if(op=='S')
		printf("%.1lf\n", soma);
	else
		printf("%.1lf\n", soma/30);

	return 0;
}
