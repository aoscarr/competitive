#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define db cout<<"Ok\n"
int main(){
  desync;
  int i,n,k,c=1,aux;
  queue<int> fila,esc;
  cin >> n >> k;
  for(i=0;i<n;i++){
    cin >> aux;
    fila.push(aux);
  }
  for(i=0;i<k;i++){
    if(fila.front() <=c)
      esc.push(fila.front());
    else{
      fila.push(fila.front());
      i--;
    }
    fila.pop();
    c++;
  }
  
  while(!esc.empty()){
    cout << esc.front() << endl;
    esc.pop();
  }
}
