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
	
	scanf("%d", &n);
	
	char m[n][n];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			scanf(" %c", &m[i][j]);
		}
	}
 
	scanf("%d", &n);
	for(int k = 0; k < n; ++k)
	{
		int x,y,z,w;
		scanf("%d %d %d %d", &x, &y, &z, &w);
		x--;y--;z--;w--;
 
		int ans=0;
		for(int i = x; i <= z; ++i){
			for(int j = y; j <= w; ++j)
				if(m[i][j]=='F') ans++;
		}	
		printf("%d\n", ans);
	}
 
	return 0;
}
