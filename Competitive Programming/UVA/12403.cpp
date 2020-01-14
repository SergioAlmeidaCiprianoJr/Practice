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
	int n,total=0;
	cin >> n;

	for(int i = 0; i < n; ++i)
	{
		string s;
		int x;
		cin >> s;
		if(s == "donate") { cin >> x; total+=x; }
		else printf("%d\n", total);
	}

	return 0;
}

