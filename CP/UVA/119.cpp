#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	int n, ok=1;
	while(cin >> n)
	{
		if(ok)
			ok = 0;
		else
			cout << endl;
		map<string, int> name;
		string order[20];
		for(int i = 0; i<n; i++)
		{
			string in;
			cin >> in;
			name[in] = 0;
			order[i] = in;
		}
		for(int i = 0; i<n; i++)
		{
			string p;
			int gift, m;
			cin >> p >> gift >> m;
			if(m!=0) name[p] -= - gift%m + gift;
			for(int j = 0; j<m; j++)
			{
				string r;
				cin >> r;
				if(m!=0) name[r] += gift/m;
			}
		}
		for(int i = 0; i<n; i++)
			cout << order[i] << " " << name[order[i]] << endl;
	}
	return 0;
}

