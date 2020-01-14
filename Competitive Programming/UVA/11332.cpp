#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	char aux;
	while(1)
	{
		int n = 0;
		while(scanf("%c", &aux), aux!='\n')
			n += aux - '0';
		if(n==0)
			break;
		
		while(1)
		{
			int num = 0;
			while(n)
			{
				num+=n%10;
				n/=10;
			}
			n = num;
			if(n<10) break;
		}

		printf("%d\n", n);
	}
	return 0;
}

