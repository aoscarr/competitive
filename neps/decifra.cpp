#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, m, cont = 1, x,y, vez;

	cin >> n >> m;
	int mat[n][m];

	for(int i=0; i < n; i++){
		for(int j=0;j < m; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 3){
				x = i;
				y = j;
			}
		}
	}
	vez = 3;	
	while(vez != 2){
		if(x > 0 && mat[x-1][y] ==1)
			x--;
		else if(x < n-1 && mat[x+1][y] == 1)
			x++;
		else if(y > 0 && mat[x][y-1] == 1)
			y--;
		else if(y < m-1 && mat[x][y+1] == 1)
			y++;
		else if( (x < n-1 && mat[x+1][y]==2) || (x >0&& mat[x-1][y]==2) || (y > 0 && mat[x][y-1] == 2) || (y < m-1 && mat[x][y+1] == 2) ){
			vez = 2;
			break;
		}		
			
		cont++;
	}
	cout << cont << endl;
}