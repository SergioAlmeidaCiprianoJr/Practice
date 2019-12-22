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
string s;
set<string> rep;

int main(){
	
	while(cin >> s)
		rep.insert(s);
	cout << rep.size() << endl;
	return 0;
}

