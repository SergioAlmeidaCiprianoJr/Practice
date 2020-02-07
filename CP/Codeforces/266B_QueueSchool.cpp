#include <bits/stdc++.h>
    
using namespace std;
    
int main()
{
    char c[60] = {};
    int x,y;
    scanf("%d %d", &x, &y);
    getchar();
    for(int i = 0; i<x; i++){
        char aux;
        scanf("%c", &aux);
        c[i] = aux;
    }
    while(y--){
        for(int j = x-1; j>0; j--){
            if(c[j-1] == 'B' && c[j] == 'G'){
                c[j] = 'B';
                c[j-1] = 'G';
                j--;
            } 
        }
    }
    for(int i = 0; i<x; i++){
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}