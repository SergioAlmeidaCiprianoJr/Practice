#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m;
int v[1000100];
 
int main(){
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
		if(i%2)
			printf("%d\n", i);		
	return 0;
}

