#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif
 
using namespace std;
 
int n, k;
int h[1000100];
 
int main(){
	
	//ios::sync_with_stdio(false);
 
	scanf("%d %d", &n, &k);
 
	for(int i = 0; i < n; ++i){
		int aux;
		scanf("%d", &aux);
		h[aux]++;
	}
 
	int continua=0, ans=0;
	for(int i = 1; i <= k; ++i){
		if(!h[i])
		{
			if(!continua) ans++;
			continua=1;
		}
		else continua = 0;
	}
 
	printf("%d\n", ans);
 
	return 0;
}
