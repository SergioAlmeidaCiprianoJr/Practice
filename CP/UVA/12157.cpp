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
	
	ios::sync_with_stdio(false);
	
	int n,m;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> m;
		int mile=0, juice=0;
		while(m--)
		{
			int time;
			cin >> time;
			mile+=time/30+1;
			juice+=time/60+1;
		}
		mile*=10;
		juice*=15;
		cout << "Case " << i << ": ";
		if(mile < juice) cout << "Mile " << mile << endl;
		if(mile > juice) cout << "Juice " << juice << endl;
		if(mile == juice) cout << "Mile Juice " << mile << endl;
	}

	return 0;
}

