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
 
string a;

int main(){
	
	int dif = 0;
	cin >> a;
	unsigned int j = a.size()-1;
	if(j==0) {
		printf("YES\n");
		return 0;
	}
	for (unsigned int i = 0; i < j; ++i)
	{
		if(i==j) break;
		if(a[i]!=a[j]) dif++;
		if(dif>1) break;
		j--;
	}

	if(dif == 1) printf("YES\n");
	else if(dif == 0 && a.size()%2!=0) printf("YES\n");
	else printf("NO\n");
	return 0;
}