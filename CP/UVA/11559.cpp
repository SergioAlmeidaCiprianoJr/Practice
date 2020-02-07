#include <bits/stdc++.h>
 
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	int n,b,h,w,p,a;
	while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
	{
		int lc = b+1;
		for(int i = 0; i<h; i++)
		{
			scanf("%d", &p);
			for(int j = 0; j<w; j++)
			{
				scanf("%d", &a);
				lc = (n <= a && p*n <= lc) ? p*n : lc;
			}
		}
		lc <= b ? printf("%d\n", lc) : printf("stay home\n");
	}

	return 0;
}
