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
	
	//ios::sync_with_stdio(false);

	scanf("%d", &n);

	for(int i = 2; i <= n; ++i)
		if(!(i%2))
			printf("%d^2 = %d\n", i, i*i);

	return 0;
}

