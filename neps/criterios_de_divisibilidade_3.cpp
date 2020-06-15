#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   string val;
   
   cin >> val;
   int s_impar = 0, s_par = 0, ordem = 0;
   
   for(int i =val.size()-1; i >=0; i--){
      ordem++;
      if(ordem % 2 == 1)
         s_impar += (int)val[i]-48;
      else
         s_par += (int)val[i]-48;
   }
   if(s_impar < s_par) s_impar += 11;
   int sp = s_impar - s_par;
   if(sp % 11 == 0 ) cout << "S\n";
   else cout << "N\n";
}

