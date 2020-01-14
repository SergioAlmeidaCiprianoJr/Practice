#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;

int n,m;

int main(){

	ios::sync_with_stdio(false);

	cin >> n;
	while(n--)
	{
		cin >> m;
		int pos=0;
		vector<int> v;
		for(int i=1; i<=m; i++)
		{
			string s;
			cin >> s;
			if(s == "LEFT")
			{
				pos--;
				v.push_back(-1);
			}
			else if(s == "RIGHT")
			{
				pos++;
				v.push_back(1);
			}
			else
			{
				int x;
				cin >> s >> x;
				v.push_back(v[x-1]);
				pos += v[x-1];
			}
		}
		cout << pos << endl;
	}

	return 0;
}

