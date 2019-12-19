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
int v[1000100];
 
int main(){

	scanf("%d\n", &n);
	map<string, string> h;
	while(n--)
	{
		string l,f;
		getline(cin, l);
		getline(cin, f);
		h[l] = f;
	}
	scanf("%d\n", &m);
	while(m--)
	{
		string p,l;
		getline(cin, p);
		getline(cin, l);
		cout << p << endl;
		cout << h[l] << endl << endl;
	}
	
	return 0;
}

