#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios::sync_with_stdio(false);

	char in;
	bool ok=1;
	while(scanf("%c", &in) != EOF)
	{
		if(in == '"')
		{
			ok ? printf("``") : printf("''");
			ok = !ok;
		}
		else printf("%c", in);
	}
	return 0;
}

