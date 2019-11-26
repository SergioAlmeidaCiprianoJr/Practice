#include<stdio.h>

int main(){
 int nTrilhas = 0;
 scanf("%d",&nTrilhas);
 int melhorTrilha = 1;
 int deltaM = 999999999;
 int elem,v1,v2;
 int deltaS = 0;
 int deltaD = 0;
 for(int i = 1; i <= nTrilhas; i++){
  
  scanf("%d",&elem);

  scanf("%d",&v1);
  
  elem --;
  
  deltaS = 0;
  deltaD = 0;

  while(elem--){
   scanf("%d", &v2);
   if(v2 > v1 )
    deltaS +=( v2 - v1 ) ;
   else 
    deltaD +=( v1 - v2 ) ;
   
   v1 = v2;
  }
  
  if( deltaS > deltaD ) 
   deltaS = deltaD;

  if( deltaS < deltaM ){
   deltaM = deltaS;
   melhorTrilha = i;
  }
 }
 printf("%d\n",melhorTrilha);
 return 0;
}