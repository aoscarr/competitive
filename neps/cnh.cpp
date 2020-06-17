#include <bits/stdc++.h>
using namespace std;
int main(){
   int a; cin >> a;
   if(a <= 99 || a > 999) cout << "Valor invalido\n";
   else{
      int b = a/100;
      cout << b << endl;
      if(b % 2 == 0) cout << "Par\n";
      else cout << "Impar\n";
   }
}
