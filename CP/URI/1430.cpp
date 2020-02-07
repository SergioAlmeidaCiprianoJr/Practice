#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m, h[7];
string s;

int main(){
	
	ios::sync_with_stdio(false);
	
	int total=0;
	while(cin >> s, s!="*")
	{
		int soma=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='/')
			{
				if(soma==64)
					total++;
				soma=0;
			}
			else if(s[i]=='W')
				soma+=64;
			else if(s[i]=='H')
				soma+=32;
			else if(s[i]=='Q')
				soma+=16;
			else if(s[i]=='E')
				soma+=8;
			else if(s[i]=='S')
				soma+=4;
			else if(s[i]=='T')
				soma+=2;
			else if(s[i]=='X')
				soma+=1;
		}
		cout << total << endl;
		total=0;
	}
	return 0;
}

