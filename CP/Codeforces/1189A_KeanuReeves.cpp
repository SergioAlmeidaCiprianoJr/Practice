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
 
int n, m;
int v[1000100];
 
int main(){
	
	//ios::sync_with_stdio(false);


	scanf("%d", &n);
	char aux;
	int zeroA = 0, umA = 0;

	for(int i = 0; i < n; i++){
		scanf(" %c", &aux);
		if(aux == '1') v[i] = 1;
		if(aux == '0') v[i] = 0;
		if(v[i]==0) zeroA++;
		else umA++;
	}

	if(zeroA==umA){
		printf("2\n%d ", v[0]);
		for(int i = 1; i < n; i++){
			printf("%d", v[i]);
		}	
		printf("\n");
		return 0;
	}
	else{
		printf("1\n%d", v[0]);
		for(int i = 1; i < n; i++){
			printf("%d", v[i]);
		}	
		printf("\n");
		return 0;
	}

	return 0;
}