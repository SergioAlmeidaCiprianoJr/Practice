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
	
	//ios::sync_with_stdio(false);

	scanf("%d", &n);
	
	int ans=0;
	for(int i = 0; i < n; ++i)
	{
		int a,b;
		cin >> a >> b;
		ans += a*b;
	}
	cout << ans << endl;

	return 0;
}

