#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif
 
using namespace std;
 
int n;
 
int main(){
	
	cin >> n;
	double total=0;
	map<string, double> m;
	string s;
	for(int i=0; i<n; i++)
	{
		double p;
		char S[10000];
		scanf(" %lf %s", &p, S);
		s="";
		s+=S;
		m[s] += p;
		total+=p;
	}
	
	double a = m["alimentacao"], d = m["despesas"], g = m["geral"], t = m["transporte"];
	
	printf("alimentacao %.2lf %.2lf\n", a, a/total*100);
	printf("despesas %.2lf %.2lf\n", d, d/total*100);
	printf("geral %.2lf %.2lf\n", g, g/total*100);
	printf("transporte %.2lf %.2lf\n", t, t/total*100);
	return 0;
}
