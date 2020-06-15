#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'



int main(){
   desync;
   int n, m, cont =0;
   char aux;
   cin >> n >> m;
   char mat[n+2][m+2];
   for(int i=0;i < n+2;i++){ 
      mat[i][0] = '.';
      mat[i][m+1] = '.';
   }
   for(int i=0; i < m+2; i++){
      mat[0][i] = '.';
      mat[n+1][i] = '.';
   }
   for(int i=1; i < n+1;i++){
      for(int j=1;j < m+1; j++){
         cin >> mat[i][j];
      }
   }
   
   for(int i=1;i < n+1; i++){
      for(int j=1; j <m+1;j++){
         aux = mat[i][j];
         if(aux == '.')continue;
         if(mat[i-1][j] == '.' || mat[i+1][j] == '.' || mat[i][j-1] == '.' || mat[i][j+1] == '.') cont++;
      }

   }
   cout << cont << endl;
}

