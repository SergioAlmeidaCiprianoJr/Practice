#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, b, arr[21];
 
int main(){
	
	ios::sync_with_stdio(false);

	while(scanf("%d %d", &b, &n), b != 0 && n != 0)
	{
		for(int i = 1; i <= b; ++i)
			scanf("%d", &arr[i]);
	
		bool res=1;
		while(n--)
		{	
			int x,y,z;
			scanf("%d %d %d", &x, &y, &z);
			arr[x] -= z;
			arr[y] += z;
		}
		for(int j = 1; j<=b; ++j)
			if(arr[j] < 0) { res=0; break; }
		res ? printf("S\n") : printf("N\n");
	}

	return 0;
}

