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
	
	char ans = 'a';
	for(int i = 0; i<26; i++)
	{
		printf("%d e %c\n", ans, ans);
		ans++;
	}
	return 0;
}

