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
	
	int total = 225;
	for(int i = 0; i < 5; ++i){
		int n;
		cin >> n;
		if(i==0) total += 300*n;
		if(i==1) total += 1500*n;
		if(i==2) total += 600*n; 
		if(i==3) total += 1000*n;
		if(i==4) total += 150*n;
	}
	cout << total << endl;

	return 0;
}

