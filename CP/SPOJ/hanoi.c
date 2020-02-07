#include <stdio.h>
// link: https://br.spoj.com/problems/OBIHANOI/

int hanoi(int n, int i){
    
    if(n <= 1) return i+1;
    else{
        i = 2*hanoi(n-1, i);
    }
    return i;
}

int main(){
    
    int m, i = 0;
    while(scanf("%d", &m), m){
        i++;
        printf("Teste %d\n", i);
        printf("%d\n", hanoi(m, 1)-1);
        printf("\n");
    }

}