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
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &m);
		int ans=0;
		for(int j = 0; j < m; ++j)
		{
			int a,b;
			scanf("%d %*d %d", &a, &b);
			ans+=a*b;
		}
		printf("%d\n", ans);
	}
	return 0;
}

