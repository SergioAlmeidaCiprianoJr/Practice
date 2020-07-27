#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;

float doit(string in)
{
	int sum=0;
	for(auto u: in)
	{
		if(u <= 'z' && u >= 'a')
			sum+=u-'a'+1;
		else if(u <= 'Z' && u >= 'A')
			sum+=u-'A'+1;
	}
	while(sum>9)
	{
		int num = 0;
		while(sum)
		{
			num+=sum%10;
			sum/=10;
		}
		sum = num;
	}
	float s = sum;
	return s;
}
 
int main(){
	
	string in, in2;
	while(getline(cin, in))
	{
		getline(cin, in2);
		float s = doit(in);
		float s2 = doit(in2);

		if(s<s2)
			printf("%.2f %%\n", s*100/s2);
		else
			printf("%.2f %%\n", s2*100/s);
	}
	return 0;
}

