#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, m, x, y,xa,ya;
	bool esq=false, dir=false,cima=false,baixo=false;
	cin >> n >> m;

	char mat[n][m];

	for(int i=0;i < n;i++){
		for(int j =0; j < m; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 'o'){
				x = i;
				y = j;
			}
		}
	}
	xa = x;
	ya = y;
	int cont = 0;
	while(true){
		if(x > 0 && !baixo && mat[x-1][y] == 'H'){
			cima = true; baixo = false;esq = false; dir = false;
			x--;
		}
		else if(x < n-1 && !cima && mat[x+1][y] == 'H'){
			cima = false; baixo = true;esq = false; dir = false;
			x++;
		}
		else if(y > 0 && !dir && mat[x][y-1] == 'H'){
			cima = false; baixo = false;esq = true; dir = false;
			 y--;
		}
		else if(y < m-1 && !esq && mat[x][y+1] == 'H'){
			cima = false; baixo = false;esq = false; dir = true;
			y++;
		}
		else
			break;
		
	}
	cout << x+1 << " " << y+1 << endl;

}