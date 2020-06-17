#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int cont= 0;
vector<int> adj[1002];

int main(){
	desync;
	int i,j,n,m,x,y; cin >> n >> m;
	pair<int,int> mat[n][m];
	for(i =0; i < n;i++){
	   for(j =0; j < m; j++){
	      cin >> mat[i][j].first;
	      mat[i][j].second = -1;
	      if(mat[i][j].first == 3){
	         x = i;
	         y = j;
	      }
	   }
	}
	int vez, c = 0;
	pair<int,int> par;
	vez = mat[x][y].first;
	i = x; j = y;
	while (vez != 2){
	   par = mat[i][j];
	   vez = mat[i][j].first;
	   mat[i][j].second = 1;
	   if(i > 0 && mat[i-1][j].first != 0 && mat[i-1][j].second == -1)
	      i--;
	   else if(i < n-1 && mat[i+1][j].first != 0 && mat[i+1][j].second == -1 )
	      i++;
	   else if(j > 0 && mat[i][j-1].first != 0 && mat[i][j-1].second == -1)
	      j--;
	   else if(i < m-1 && mat[i][j+1].first != 0 && mat[i][j+1].second == -1)
	      j++;
	   

	   cont++;
	}
	cout << cont << endl;
//	queue<pair<int,int>>fila;
//	pair<int,int> par;
//	fila.push(mat[x][y]);
//	i =x;j=y;
//	while(!fila.empty()){
//	   par = fila.front();
//	   fila.pop();
//	   if(i > 0 && mat[i-1][j].first == 1 && mat[i-1][j].second != -1){
//	   
//	   }
//	}
//	for(i =x; i < n;i++){
//	   for(j =y; j < m; j++){
//	     if(i > 0 && )
//	      
//	   }
//	}
}
