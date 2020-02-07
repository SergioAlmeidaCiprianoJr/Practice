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
 
string s;
 
int main(){
	
	ios::sync_with_stdio(false);

	cin >> s;
	//W(s);
	//W(s.size());

	if(s.size()<3 || (s<="127" && s.size()==3)) cout<<"byte\n";
	else if(s.size()<5 || (s<="32767" && s.size()==5)) cout<<"short\n";
	else if(s.size()<10 || (s<="2147483647" && s.size()==10)) cout<<"int\n";
	else if(s.size()<19 || (s<="9223372036854775807" && s.size()==19)) cout<<"long\n";
	else cout<<"BigInteger\n";

	return 0;
}