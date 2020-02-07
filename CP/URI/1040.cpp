#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
double n1, n2, n3, n4, t, media;
 
int main(){
	
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	media = 2*n1 + 3*n2 + 4*n3 + n4;
	media /= 10;

	if(media >= 7)
		printf("Media: %.1lf\nAluno aprovado.\n", media);
	else if(media < 5)
		printf("Media: %.1lf\nAluno reprovado.\n", media);
	else
	{
		printf("Media: %.1lf\nAluno em exame.\n", media);
		t += media;
		scanf("%lf", &media);
		t += media;
		t /= 2;
		if(t >= 5)
			printf("Nota do exame: %.1lf\nAluno aprovado.\n", media);
		else
			printf("Nota do exame: %.1lf\nAluno reprovado.\n", media);
		printf("Media final: %.1lf\n", t);
	}
	return 0;
}

