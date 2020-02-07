#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios::sync_with_stdio(0);

	int n,i=1;
	while(cin >> n, n)
	{
		int t=0,nt=0;
		while(n--)
		{
			int in;
			cin >> in;
			in ? t++ : nt++;
		}
		cout << "Case " << i << ": " << t - nt << endl;
		i++;
	}
	return 0;
}

