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
 
int n, m, ans;
int v[1000100];
 
int main(){
	
	scanf("%d", &n);

	char aux;
	v[0] = 0;
	for(int i = 1; i <= n; i++){
		scanf(" %c", &aux);
		int AUX = aux - '0';
		if(AUX%2==0) v[0] += i;
	}

	printf("%d\n", v[0]);

	return 0;
}