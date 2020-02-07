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

int main(){
	
	ios::sync_with_stdio(false);

	cin >> n;
	while(n--)
	{
		cin >> m;
		string s,t,ans;
		int aux = m-1;
		while(m--)
		{
			cin >> s;
			if(aux == m)
			{
				aux=-1;
				ans = s;
				t = s;
				continue;
			}
			if(s!=t)
				ans="ingles";
		}
		cout << ans << endl;
	}
	return 0;
}

