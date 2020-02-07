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
#define prime 1000000007
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, ans;
string a="Tetrahedron",b="Cube",c="Octahedron",d="Dodecahedron",e="Icosahedron";
int v[1000100];
 
int main(){
	
	//ios::sync_with_stdio(false);

	scanf("%d", &n);

	for(int i = 0; i < n; ++i){
		string aux;
		cin >> aux;
		if(aux == a) ans += 4;
		if(aux == b) ans += 6;
		if(aux == c) ans += 8;
		if(aux == d) ans += 12;
		if(aux == e) ans += 20;
	}

	printf("%d\n", ans);

	return 0;
}