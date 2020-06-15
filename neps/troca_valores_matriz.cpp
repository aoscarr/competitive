#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int m,n,v; cin >> m >> n >> v;
   int mat[m][m];
   
   for(int i=0; i<m;i++){
      for(int j=0; j<m;j++){
         cin >> mat[i][j];
         if(mat[i][j] == n) mat[i][j] = v;
         
         cout << mat[i][j] << " ";
      }
      cout << endl;
   }
   
}
