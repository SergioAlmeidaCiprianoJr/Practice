#include <bits/stdc++.h>

using namespace std;

#define MAX 1030

char G[MAX][MAX];

int dx[] = {-1, 1, 0,  0};
int dy[] = { 0, 0, 1, -1};

int N, M;

int ff(int x, int y, char color, char newcolor){
	
	if(x < 0 || y < 0 || x >= N || y >= M) return 0;
	if(G[x][y] != color) return 0;
	
	int vertice_count = 1;
	G[x][y] = newcolor;
	
	for(int i = 0; i < 4; ++i) vertice_count += ff(x+dx[i], y+dy[i], color, newcolor);
	
	return vertice_count;
}
 
int main() {
    
    int c = 0;
    
    cin >> N >> M;
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){ 
            char a;
            cin >> a;
            G[i][j] = a;
        }
    }
    
	for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){ 
            int ap = ff(i, j, '.', 'o');  
            if(ap >= 1) c++;
        }
    }
    
    cout << c << endl;
    
    return 0;
}
