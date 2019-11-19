#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		char aux;
		int i=0, m[101000]={}, bol=0;
		while(scanf("%c", &aux), aux!='\n'){
			if(aux == '1' ||
			   aux == '2' ||
			   aux == '3' ||
			   aux == '4' ||
		       aux == '5' ||
			   aux == '6' ||
			   aux == '7' ||
			   aux == '8' ||
		       aux == '9' ||
			   aux == '0'){
			   	 m[i]*=10;
				 m[i]+=(aux-'0');
				 bol=1;
			}
			else if(bol){
				i++;
				bol=0;
			}
		}
		int soma=0;
		for(int j=0; j<=i; j++)		
			soma+=m[j];
		printf("%d\n", soma);
	}
	return 0;
}
