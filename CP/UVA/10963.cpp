#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n,m;
 
int main(){
	
	ios::sync_with_stdio(false);

	scanf("%d", &n);
	while(n)
	{
		scanf("%d", &m);
		int gap = 0;
		bool ok = 1;
		for(int j = 0; j < m; ++j)
		{
			int a,b;
			scanf("%d %d", &a, &b);
			!j ? gap = a-b : ok = (gap != a-b ? 0 : ok);
		}
		ok ? printf("yes\n") : printf("no\n");
		n--;
		if(n) printf("\n");
	}

	return 0;
}

