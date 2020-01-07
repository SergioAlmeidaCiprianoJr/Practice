#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	double n,pos=0,m=0,h=6;
	while(h--)
	{
		scanf("%lf", &n);
		if(n>=0)
		{
			pos++;
			m+=n;
		}
	}
	cout << pos << " valores positivos" << endl;
	cout << setprecision(2) << m/pos << endl;
	return 0;
}

