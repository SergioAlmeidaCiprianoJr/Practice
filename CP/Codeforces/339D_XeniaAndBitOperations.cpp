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
 
int n, m, p, b;
int v[1000100];
 
int main(){
	
	scanf("%d %d", &n, &m);

	//2^n
	int aux = 1;
	for(int i = 0; i < n; ++i){
		aux *= 2;
	}

	//Alocando base da Heap
	int h = 2*aux - 1;
	for(int i = 0; i < aux; ++i){
		scanf("%d", &v[h-i]); 
	}

	//Criando a Heap
	for(int i = 0; i < n; ++i){
		if(i%2==0){
			for(int i = h; i > h/2; i-=2){
				v[i/2] = v[i]|v[i-1];
			}
			h/=2;
		}
		else{
			for(int i = h; i > h/2; i-=2){
				v[i/2] = v[i]^v[i-1];	
			}
			h/=2;
		}
	}

	//Alterando a Heap
	aux *= 2;
	for(int i = 0; i < m; ++i){
		scanf("%d %d", &p, &b);
		int H = aux-p, j = 0;
		v[H] = b;
		H/=2;
		while(H){
			if(j%2==0)
				v[H] = v[H*2]|v[H*2+1];
			else
				v[H] = v[H*2]^v[H*2+1];	
			j++;
			H/=2;
		}
		printf("%d\n", v[1]);
	}

	return 0;
}