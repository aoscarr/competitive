#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
bool e_primo(int);
int main(){
   int a; cin >> a;
   
   for(int i=2;i <= a; i++){
      if(e_primo(i)) cout << i << " ";
   }
   cout << endl;
}
bool e_primo(int x){
  if(x == 1)  return 0;
  for(int i = 2; i*i <= x; ++i){ //note que se o número for 2 ele não entra no loop, comportamento desejado
    if(x % i == 0){ //se o resto de x por i for 0, então i divide x
      return 0;
    }
  }
  return 1;
}
