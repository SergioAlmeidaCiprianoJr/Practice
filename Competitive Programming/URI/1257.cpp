#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;

ll ctoi(char c);
ll h(const string& s, int element);

int main(){
	
	//ios::sync_with_stdio(false);

	int n;
	scanf("%d", &n);
	while(n--)
	{
		ll m, ans=0, j=0;
		scanf("%lld", &m);
		while(m--)
		{
			string s;
			cin >> s;
			ans += h(s, j);
			j++;
		}
		printf("%lld\n", ans);
	}
	return 0;
}

ll ctoi(char c)
{
	return c - 'A';
}
ll h(const string& s, int element)
{
	int res=0;
	for(int i=0; i<s.size(); i++)
		res+=(i+ctoi(s[i])+element);
	return res;
}
