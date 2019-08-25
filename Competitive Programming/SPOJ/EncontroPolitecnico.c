#include <stdio.h>
//local da questão https://br.spoj.com/problems/ENCONTRO/

void norte(int *x, int *y);
void sul(int *x, int *y);
void leste(int *x, int *y);
void oeste(int *x, int *y);

int main(){

    void (*escolhe[])(int *x, int *y) = { norte, sul, leste, oeste};
    int n,m,i,bolean=0;
    scanf("%d %d", &n, &m);
    int loop;
    scanf("%d", &loop);
    int x1=1,y1=1,x2=n,y2=m;
    
    for(i = 1; i<=loop; i++){
        
        int d1,d2;//direção 1 e 2
        scanf("%d %d", &d1, &d2);
        escolhe[d1-1](&x1, &y1);
        escolhe[d2-1](&x2, &y2);

        if((x1<1 || y1>m) && bolean != -1){
            printf("PA saiu na posicao (%d,%d) no passo %d\n", x1, y1, i);
            bolean = -1;
        }
        else if(x1 == x2 && y1 == y2 && bolean != -1) {
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", x1, y1, i);
            bolean = -1;
        }
        else if((x1<1 || y2>m) && bolean != -1){
            bolean = i;
        }
    }
    
    if(bolean == -1) return 0;
    else if(bolean){
        printf("PB saiu na posicao (%d,%d) no passo %d\n", x2, y2, bolean);
        return 0;
    }
    else printf("Nao se encontraram\n");

    return 0;
}

void norte(int *x, int *y){
    *y+=1; 
}
void sul(int *x, int *y){
    *y-=1;
}
void leste(int *x, int *y){
    *x+=1;
}
void oeste(int *x, int *y){
    *x-=1;
}