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
vector<int> v;

int main(){
	
	while(scanf("%d", &n)!=EOF)
	{
		v.clear();
		while(n--)
		{
			scanf("%d", &m);
			v.push_back(m);
		}
		sort(v.begin(), v.end());
		for(auto u: v)
			printf("%04d\n", u);
	}

	return 0;
}

