#include <bits/stdc++.h>
using namespace std;

int main(){
   set<string> conj, rep;
   int n, cont=0; cin >> n;
   vector<string>v;
   string pal;
   for(int i=0; i < n;i++){
      cin >> pal;
      if(conj.count(pal)){
         rep.insert(pal);
         cont++;
      }
      conj.insert(pal);
      
   }
   cont += rep.size();
   cout << cont << endl;
   
}
