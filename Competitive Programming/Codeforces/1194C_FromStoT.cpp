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
 
int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		char aux;
		unsigned int verificaOrdem = 0;
		string ordemS, ordemT;
		int ans=0,m=0;
		int s[30]={}, t[110]={};
		while(scanf("%c", &aux), aux!='\n'){
			s[aux-'a']++;
			ordemS+=aux;
		}
		while(scanf("%c", &aux), aux!='\n'){
			t[m] = aux-'a';
			ordemT+=aux;
			m++;
		}
		while(scanf("%c", &aux), aux!='\n'){
			s[aux-'a']++;
		}

		for(int i = 0; i < m; ++i){
			if(s[t[i]]) ans++;
			s[t[i]]--;
		}

		for(unsigned int i = 0; i < ordemT.size(); ++i){
			if(ordemS[verificaOrdem] == ordemT[i]) verificaOrdem++;			
			if(verificaOrdem==ordemS.size()) break;
		}
		/*
		W(verificaOrdem);
		W(m);
		W(ans);
		W(ordemS);
		W(ordemS.size());
		W(ordemT);	
		W(ordemT.size());*/
		if(ans==m && verificaOrdem==ordemS.size()) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}