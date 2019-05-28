#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
  desync;
  int i,n,aux,j,a;
  queue<int> fila;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> aux;
    fila.push(aux);
  }
  for(i=0;i<n-1;i++){
    cin >> aux;
    for(j=0;j<aux;j++){
      fila.push(fila.front());
      fila.pop();
    }
    fila.pop();
  }
  cout << fila.front() << endl;
}
