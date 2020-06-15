#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
   desync;
   string a,b="angeling",c="deviling",d="",e="";
   int ang=0,dev =0;
   cin >> a;
   
   for(int i=0; i < a.size(); i++){
      if(dev < c.size() && a[i] == c[dev]){
         a[i] = '0';
         d+=c[dev];
         dev++;
      }
      if(ang < b.size() && a[i] == b[ang]){
         a[i] = '0';
         e+=b[ang];
         ang++;
      }
   }
   
   if(e == b && d != c)
      cout << "todos amam o angeling\n";
   else if(e == b && d == c)
      cout << "... ate conhecerem o deviling!\n";
   else
      cout << "a poringolandia esta de luto\n";
   
   
}
