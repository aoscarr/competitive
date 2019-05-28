#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
struct pes{
  int id, din;
};
int main(){
  desync;
  int i,n,m,x;
  queue<pes> fila;
  
  pes aux;
  cin >> n >> m >> x;
  for(i=0;i<n;i++){
    cin >> aux.id >> aux.din;
    if(aux.din >= x)  fila.push(aux);
  }
  for(i=0;i<m;i++){
    aux = fila.front();
    fila.pop();
    aux.din -= x;
    if (aux.din >= x) fila.push(aux); 
  }
  if(fila.empty()) cout << "SEM FILA\n";
  else{
    while(!fila.empty()){
      cout << fila.front().id << " " << fila.front().din << endl;
      fila.pop();
    }
  }
 

}
