#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n, cont = 0, x_ant, y_ant, x_fut, y_fut, x, y; cin >> n;
   
   cin >> x_ant >> y_ant >> x >> y;
   
   for(int i = 0; i < n-1; i++){
      cin >> x_fut >> y_fut;
      if( y > y_ant){ // subindo
         if(x_fut < x) cont++;
      }
      else if(y < y_ant){ // descendo
         if(x_fut > x) cont++;
      }
      else if(x > x_ant){ //direita
         if(y_fut > y) cont++;
      }
      else { //esquerda
         if(y_fut < y) cont++;
      }
      x_ant = x; y_ant = y;
      x = x_fut; y = y_fut;
   }
   cout << cont << endl;
  return 0;
}
