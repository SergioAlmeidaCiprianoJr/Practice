#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,ans=0,m;
	cin >> n;
	while(n--)
	{
		cin >> m;
		if(m!=1) ans++;
	}
	cout << ans << endl;
	return 0;
}

