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

	int n;
	cin >> n;
	while(n--)
	{
		ll a,e;
		cin >> a >> e;
		cout << floor(e*log10(a))+1 << endl;
	}
	return 0;
}
