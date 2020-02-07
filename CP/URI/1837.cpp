#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int a, b;
int v[1000100];
 
int main(){
	
	scanf("%d %d", &a, &b);

	int q = a/b, r = a%b;
	if(r>0)
		printf("%d %d\n", q, r);
	else if(a<0)
	{
		q = r = 0;
		int aux = abs(a);
		while(aux%b)
			aux++;
		printf("%d %d\n", (aux/b)*(-1), aux+a);
	}
	else
	{
		int aux = abs(b);
		q = a/b, r = a%b;
		printf("%d %d\n", q, r);
	}
	return 0;
}

