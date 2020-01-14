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
vector<string> v[110];
 
int main(){
	
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int m = 10,maior=-1;
		while(m--)
		{
			int x;
			string s;
			cin >> s >> x;
			x--;
			if(maior==-1) maior = x;
			if(maior<x) maior = x;
			v[x].push_back(s);
		}
		cout << "Case #" << i+1 << ":" << endl;
		for(auto u: v[maior])
			cout << u << endl;
		for(int i = 0; i<101; i++)
			v[i].clear();
	}

	return 0;
}

