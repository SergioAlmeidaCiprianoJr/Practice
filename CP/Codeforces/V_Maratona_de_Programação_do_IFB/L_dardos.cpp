#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif
 
using namespace std;
 
double n,ans;
vector<double> r;
vector<double> p;
 
int main(){
	
	ios::sync_with_stdio(false);
 
	scanf("%lf", &n);
	while(n--)
	{
		double ri,pi;
		scanf("%lf %lf", &ri, &pi);
		r.push_back(ri);
		p.push_back(pi);
	}
	scanf("%lf", &n);
	while(n--)
	{
		double xi,yi;
		scanf("%lf %lf", &xi, &yi);
		xi = abs(xi);
		yi = abs(yi);
		double soma = xi*xi + yi*yi;
		soma = sqrt(soma);
		
		auto lb = lower_bound(r.begin(), r.end(), soma);
		if(lb != r.end())
			ans+=p[lb-r.begin()];
	}
 
	printf("%.0lf\n", ans);
	return 0;
}
