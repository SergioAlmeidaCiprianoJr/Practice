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
	
	int n;
	cin >> n;

	for(int i = 0; i < n; ++i)
	{
		string num;
		cin >> num;
		if(num == "1" || num == "78" || num == "4")
			printf("+\n");
		else if(num[num.size()-1] == '5' && num[num.size()-2] == '3')
			printf("-\n");
		else
		{
			if(num[0] == '1' && num[1] == '9' && num[2] == '0')
				printf("?\n");
			else printf("*\n");
		}
	}

	return 0;
}

