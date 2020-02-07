#include <stdio.h>

int total;

int resposta(int grauNove){
	if(total<10) return grauNove;
	int aux = 0;
	while(total){
		aux += total%10;
		total /= 10;
	}
	total = aux;
	grauNove++;
	return resposta(grauNove);
}
 
 
int main(){
	
	char entrada;
	while(scanf(" %c", &entrada), entrada!='0'){
		total = entrada - '0';
		printf("%c", entrada);
		while(scanf("%c", &entrada), entrada!='\n'){
			total += entrada - '0';
			printf("%c", entrada);
		}
		int ans = resposta(1);
		if(total == 9) printf(" is a multiple of 9 and has 9-degree %d.\n", ans);
		else printf(" is not a multiple of 9.\n");
	}

	return 0;
}