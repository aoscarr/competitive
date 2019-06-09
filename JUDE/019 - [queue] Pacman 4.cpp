#include <iostream>
#include <queue>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int i,j, n, m, fant=0,aux,aux2;
   cin >> n >> m;
   int mat[n][m];
   queue<int> fila;
   for(i=0;i<n;i++)for(j=0;j<m;j++) cin >> mat[i][j];
   
   for(j=0;j<m;j++){
      if(j%2 == 0){
         for(i=0;i<n;i++){
            aux = mat[i][j];
            if(aux > 0){
               if(fant == 0){
                  fila.push(aux) ;cout << "aux " << aux << " i " << i << " j " << j << endl;}
               else{
                  fant--;
                  if(fant == -1) fant = 0;
               }
            }else if(aux < 0){
               aux *= -1;
               if(fila.front() >= aux){
                  if(fila.front() == aux) fila.pop();
                  else{
                     aux2 = fila.front();
                     fila.pop();
                     aux2 -= aux;
                     fila.push(aux2);
                  }
               }
               else
                  fant = aux;
            }
            
         }
      }
      else{
         for(i=n-1;i>=0;i--){
            aux = mat[i][j];
            if(aux > 0){
               if(fant == 0){
                  fila.push(aux); cout << "aux " << aux << " i " << i << " j " << j << endl;} 
               else{
                  fant--;
                  if(fant == -1) fant = 0;
               }
            }else if(aux < 0){
               aux *= -1;
               if(fila.front() >= aux){
                  if(fila.front() == aux) fila.pop();
                  else{
                     aux2 = fila.front();
                     fila.pop();
                     aux2 -= aux;
                     fila.push(aux2);
                  }
               }
               else{
                  fila.push(fila.front());
                  fila.pop();
                  fant = aux;
               }
            }
            
         }
      }
   }
   aux = 0;

   while(!fila.empty()){
      aux += fila.front();
      fila.pop();
   }
   cout << aux << endl;
   return 0;
}
