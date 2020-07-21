#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	float h,u,d,f;
	while(scanf("%f %f %f %f", &h, &u, &d, &f), h)
	{
		float reduction = f/100*u;
		float ans=0, pos=0, day=0;
		while(1)
		{
			day++;
			pos+=u;
			if(pos>h) {ans++; break;}
			pos-=d;
			if(pos<0) break;
			u = u-reduction;
			if(u<0) u=0;
		}
		ans ? printf("success on day %.f\n", day)
		    : printf("failure on day %.f\n", day);
	}
	return 0;
}

