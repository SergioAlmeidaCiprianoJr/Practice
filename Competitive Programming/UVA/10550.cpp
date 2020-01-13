#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios::sync_with_stdio(false);

	int a,b,c,n;
	while(scanf("%d %d %d %d", &n, &a, &b, &c), a != 0 || b != 0 || c != 0 || n != 0)
	{
		int ans = 120;
		ans += (n >= a) ? n-a: n+40-a;
		ans += (a <= b) ? b-a: b+40-a;
		ans += (b >= c) ? b-c: b+40-c;
		cout << ans*9 << endl;
	}
	return 0;
}

