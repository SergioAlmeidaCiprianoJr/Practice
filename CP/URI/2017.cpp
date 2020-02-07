#include <bits/stdc++.h>
 
using namespace std;
 
int hammingDist(string str1, string str2);
 
int main(){
	
	int n,menor=100000000,im=-1;
	string s,t;
	cin >> s >> n;
	for(int i = 1; i <= 5; ++i)
	{
		cin >> t;
		int k = hammingDist(s,t);
		if(n > k && menor > k)
		{
			menor = k;
			im    = i;
		}
	}
	
	cout << im << endl;
	if(im != -1) cout << menor << endl;

	return 0;
}

int hammingDist(string str1, string str2)
{
	int i = 0, count = 0;
	while(str1[i] != '\0')
	{
		if(str1[i] != str2[i])
			count++;
		i++;
	}
	return count;
}
