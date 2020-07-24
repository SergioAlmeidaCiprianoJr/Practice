#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
const int MAX=1000010;
int v[MAX];
 
int main(){
	
	char aux;
	int iteration=0;
	while(scanf("%c", &aux)!=EOF && aux!='\n')
	{
		iteration++;
		printf("Case %d:\n", iteration);
		v[0]=1;
		int i=1, before=aux-'0';
		while(aux!='\n')
		{
			scanf("%c", &aux);
			if(aux=='\n') break;
			int conv=aux-'0';
			before == conv ? v[i]=v[i-1]+1
			               : v[i]=1;
			before=conv;
			i++;
		}
		int n;
		scanf(" %d", &n);
		while(n--)
		{
			int a,b;
			scanf("%d %d", &a, &b);
			if(b-a == v[b]-v[a])
				printf("Yes\n");
			else printf("No\n");
		}
		getchar();
	}
	return 0;
}

