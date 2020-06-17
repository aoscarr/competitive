#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

bool e_primo(long long int);

int main(){
   long long int a; cin >> a;
   if(e_primo(a)) cout << "S\n";
   else cout << "N\n";
}
bool e_primo(long long int x){
  if(x == 1)  return 1;
  for(long long int i = 2; i*i <= x; ++i){ //note que se o número for 2 ele não entra no loop, comportamento desejado
    if(x % i == 0){ //se o resto de x por i for 0, então i divide x
      return 0;
    }
  }
  return 1;
}  

