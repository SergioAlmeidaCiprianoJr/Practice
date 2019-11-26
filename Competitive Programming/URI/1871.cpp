#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
ll n, m;
string ans;

int main(){
	

	while(scanf("%lld %lld", &n, &m), n && m)
	{
		ans="";
		n+=m;
		while(n)
		{
			if(n%10) ans += (n%10)+'0';
			n/=10;
		}
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	return 0;
}

