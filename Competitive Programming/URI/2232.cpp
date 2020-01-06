#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;

int fem(int a);
 
int main(){
	
	ios::sync_with_stdio(false);
	int n,a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		cout << fem(a) << endl;
	}

	return 0;
}

int fem(int a)
{
	int res=1, base=2;
	while(a)
	{
		if(a & 1)
			res *= base;

		a >>= 1;
		base *= base;
	}
	return res-1;
}
