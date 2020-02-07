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
 
int n, m,j;
char v[1000100];
 
int main(){
	
	//ios::sync_with_stdio(false);

	scanf("%d", &n);

	char a;
	for(int i = 0; i < n; ++i){
		scanf(" %c", &a);
		if(a=='\n') break;
		v[i] = a;
	}
	if(n%2==0){
		for(int i = n-2; i >= 0; i-=2){
			printf("%c", v[i]);
		}

		for(int i = 1; i <= n; i+=2){
			printf("%c", v[i]);
		}

		printf("\n");

		return 0;
	}

	for(int i = n-2; i > 0; i-=2){
		printf("%c", v[i]);
	}

	for(int i = 0; i < n; i+=2){
		printf("%c", v[i]);
	}

	printf("\n");

	return 0;
}