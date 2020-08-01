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
     int time, n_regras; cin >> time >> n_regras;
     queue<string> fila,ans;
     map<string,string>mapa;
     for(int i =0 ; i < n_regras; i++){
          string a, b; cin >> a >> b;
          mapa[a] = b;
     }
     string ini = "A";
     fila.push("A");
     for(int i =0 ; i < time; i++){
          if(!fila.empty()){
               ini = mapa[fila.front()];
               fila.pop();
               fila.push(ini);
          }

     }
}
