#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	ios::sync_with_stdio(false);
	int n,m,c;
	int it=1;
	while(scanf("%d %d %d", &n, &m, &c), n && m && c)
	{	
		printf("Sequence %d\n", it++);

		int cf[n], aux[n];
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &cf[i]);
			aux[i] = 0;
		}
		int maior = 0, blown=0;
		int on, total=0;
		for(int i = 0; i < m; ++i)
		{
			scanf("%d", &on);
			on--;
			!aux[on] ? aux[on] = 1 : aux[on] = 0;
			aux[on] ? total+=cf[on] : total-=cf[on];
			if(maior<total) maior=total;
			if(maior>c) blown=1;
		}
		blown ? printf("Fuse was blown.\n")
					: printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", maior);
		printf("\n");
	}
	return 0;
}
