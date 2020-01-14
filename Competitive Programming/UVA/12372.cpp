#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n;
 
int main(){
	
	ios::sync_with_stdio(false);

	scanf("%d", &n);

	for(int i = 1; i <= n; ++i)
	{
		int l,w,h;
		scanf("%d %d %d", &l, &w, &h);
		if(l <= 20 && w <= 20 && h <= 20)
			printf("Case %d: good\n", i);
		else printf("Case %d: bad\n", i);
	}

	return 0;
}

