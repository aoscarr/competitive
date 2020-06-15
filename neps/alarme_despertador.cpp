#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int h1,m1,h2,m2,hf,mf, min = 0;
   cin >> h1 >> m1 >> h2 >> m2;
   
   while(!(h1 == 0 && h2 == 0 && m2 == 0 && m1 == 0)){
      if(h2 < h1) h2 += 24;
      if(h2 == 0) h2 += 24;
      if(h2 == h1 && m2 < m1)
         h2 += 24;
      if(m2 < m1){
         h2 --;
         m2 += 60;
      }
      min = (h2-h1)*60 + m2-m1;
      cout << min << endl;
      cin >> h1 >> m1 >> h2 >> m2;
   }
   
}
