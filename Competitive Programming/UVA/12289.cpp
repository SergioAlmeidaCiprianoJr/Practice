#include <bits/stdc++.h>
 
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	int n;
	char num[10] = {};
	char um[] = {'o', 'n', 'e'};
	char dois[] = {'t', 'w', 'o'};
	char tres[] = {'t', 'r', 'e', 'e'};
	scanf("%d%*c", &n);
	while(n--)
	{
		scanf("%s", num);
		int i = 0, cont=0;
		bool ok=1;
		while(i<3)
		{
			cont += (um[i]!=num[i]) ? 1 : 0;
			i++;
		}
		if(cont<=1){ cout << "1\n"; ok=0; }
		
		if(ok)
		{
			cont = 0;
			i=0;
			while(i<3)
			{
				cont += (dois[i]!=num[i]) ? 1 : 0;
				i++;
			}
			if(cont<=1){ cout << "2\n"; ok=0; }
		}

		if(ok) cout << "3\n";
	}
	return 0;
}

