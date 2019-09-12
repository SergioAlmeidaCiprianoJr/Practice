#include <stdio.h>
 
 
int main(){
	
	char entrada;
	while(scanf(" %c", &entrada), entrada!='0'){
		int total = 0, grauNove = 0;
		total += entrada - '0';
		printf("%c", entrada);
		while(scanf("%c", &entrada), entrada!='\n'){
			total += entrada - '0';
			printf("%c", entrada);
		}
		grauNove=1;
		while(total>10){
			int aux = 0;
			while(total){
				aux += total%10;
				total /= 10;
			}
			total = aux;
			grauNove++;
		}
		if(total == 9) printf(" is a multiple of 9 and has 9-degree %d.\n", grauNove);
		else printf(" is not a multiple of 9.\n");
	}

	return 0;
}