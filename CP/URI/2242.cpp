#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
string s;

int main(){
	
	char aux;
	while(scanf("%c", &aux), aux!='\n')
		if(aux=='a' || aux=='e' || aux=='i' || aux=='o' || aux == 'u')
			s+=aux;
	
	int wrong=0;
	for(int i=0, j=s.size()-1; i<j; i++, j--){
		if(s[i]!=s[j]){
			wrong++;
			break;
		}
	}

	if(wrong)
		printf("N\n");
	else
		printf("S\n");
	return 0;
}
