#include <bits/stdc++.h>
    
using namespace std;
    
int main(){
    
    int n;
    scanf("%d", &n);
    long long int chips[3] = {},  aux;
    for(int i = 0; i<n; i++){
        scanf("%lld", &aux);
        chips[aux%2]++;
    }
    if(chips[0] < chips[1]) cout << chips[0] << endl;
    else cout << chips[1] << endl;
    
    return 0;
}
