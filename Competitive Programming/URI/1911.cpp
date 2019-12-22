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
map<string, string> mapa;

int main(){
	
	string s,t;
	while(scanf("%d", &n), n)
	{
		int total=0;
		while(n--)
		{
			cin >> s >> t;
			mapa[s] = t;
		}
		scanf("%d", &m);
		while(m--)
		{
			cin >> s >> t;
			string aux = mapa[s];
			int dif=0;
			for(int i = 0; i<aux.size(); i++)
				if(aux[i]!=t[i])
					dif++;
			if(dif>1)
				total++;
		}
		cout << total << endl;
	}
	return 0;
}

