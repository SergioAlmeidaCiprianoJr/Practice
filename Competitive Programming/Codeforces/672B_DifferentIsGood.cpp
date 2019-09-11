#include <bits/stdc++.h>
 
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define vc vector<char>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define pi 3.14159265359
#define oo 1e9

#define prime 1e9+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m;
int v[1000100];
 
int main(){
	
	cin >> n;
	getchar();
	set<char> entrada;
	for(int i = 0; i < n; ++i){
		char aux;
		cin >> aux;
		entrada.insert(aux);	
	}

	if(n>26) cout << "-1\n" << endl;
	else cout << n-entrada.size() << endl;

	return 0;
}