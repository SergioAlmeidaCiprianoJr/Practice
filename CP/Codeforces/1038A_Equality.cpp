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
 
int n, ans, m;
int v[30];
 
int main(){
	
	scanf("%d %d", &n, &m);

	char aux;
	for(int i = 0; i < n; ++i){
		scanf(" %c", &aux);
		v[aux-'A']++;
	}

	int falso = 1, menor = v[0];
	for(int i = 1; i < m; ++i){
		if(menor > v[i]) menor = v[i];
		if(!v[i]){
			menor = 0;
			break;
		}
	}
	ans = menor*m;

	printf("%d\n", ans);

	return 0;
}