#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m;
 
int main(){
	
	while(scanf("%d %d", &n, &m), n && m)
	{
		if(n < 0)
		{
			if(m < 0)
				printf("terceiro\n");
			else
				printf("segundo\n");
		}
		else
		{
			if(m < 0)
				printf("quarto\n");
			else
				printf("primeiro\n");
		}
	}

	return 0;
}

