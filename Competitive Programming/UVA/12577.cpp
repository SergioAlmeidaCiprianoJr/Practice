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
	
	string s;
	int i=0;
	while(cin >> s, s!="*")
	{
		i++;
		if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n", i);
		else printf("Case %d: Hajj-e-Asghar\n", i);
	}
	return 0;
}

