#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	int n,ans=0;
	cin >> n;
	while(n--)
	{
		int a,b;
		cin >> a >> b;
		(a>b) ? ans+=b : ans+=0;
	}
	cout << ans << endl;
	return 0;
}

