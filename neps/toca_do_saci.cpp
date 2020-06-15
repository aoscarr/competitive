#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, m, cont = 1, x,y,x_ant, y_ant, vez;

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
	vez = 1;
	x_ant = -1;
	y_ant = -1;	
	while(vez <=  10){
		cout << mat[x][y] << " - x" << x << " y" << y << " xa" << x_ant << " ya" << y_ant << endl;
		
		if(x > 0 && mat[x-1][y] ==1 && (x+1 != x_ant)){
			x_ant = x;
			x--;
		}
		else if(x < n-1 && mat[x+1][y] == 1 && (x-1 != x_ant)){
			x_ant = x;
			x++;
		}
		else if( (y > 0) && (mat[x][y-1] == 1) && (y != (y_ant+1))){
			y_ant = y;
			y--;
			cout << "caiu\n";
		}
		else if(y < m-1 && mat[x][y+1] == 1 && (y != y_ant+1)){
			y_ant = y;
			y++;
		}
		else if( (x < n-1 && mat[x+1][y]==2) || (x >0&& mat[x-1][y]==2) || (y > 0 && mat[x][y-1] == 2) || (y < m-1 && mat[x][y+1] == 2) ){
			cont++;
			break;
		}
		else if(mat[x][y] == 2) 
			break;		
		vez++;
		cont++;
	}
	cout << mat[x][y] << " - \n\n";
	cout << cont << endl;
}