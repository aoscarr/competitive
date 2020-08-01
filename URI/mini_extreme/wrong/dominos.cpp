#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

int main(){
     desync;
     int c; cin >> c;
     for(int i = 0; i < c; i++){
          int n_pecas, n_pares; cin >> n_pecas >> n_pares;
          map<int,bool>mapa;
          for(int j = 1; j <= n_pecas; j++)
               mapa[j] = false;
          int x, y;
          for(int j = 0; j < n_pares; j++){
               cin >> x >> y;
               mapa[y] = true;
          }
          int cont = 0;
          for(auto it = mapa.begin(); it != mapa.end(); it++){
               if( (*it).ss == false){
                    cont++;
               }
               if(cont == 2) break;
          }
          if(cont <= 1) cout << "S\n";
          else cout << "N\n";

     }
}
