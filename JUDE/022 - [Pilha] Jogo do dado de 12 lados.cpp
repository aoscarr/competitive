#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int i,jo,pe,k, sj = 0, sp=0;
   stack<int>j,p;
   for(i=0;i<12;i++){
      cin >> jo >> pe;
      if(jo > 0) j.push(jo);
      else if( jo < 0) {
         if(!p.empty()){
            jo*= -1;
            for(k=0;(!p.empty() && k<jo);k++)
               p.pop();
         }
      }
      if(pe > 0) p.push(pe);
      else if( pe < 0) {
         if(!j.empty()){
            pe*= -1;
            for(k=0;(!j.empty() && k<pe);k++)
               j.pop();
         }
      }
   }
   while (!j.empty()){
      sj += j.top();
      j.pop();
   }
   while (!p.empty()){
      sp += p.top();
      p.pop();
   }
   if(sp == sj) cout << "Empate\n";
   else if(sp > sj) cout << "Pedrinho " << sp << endl;
   else cout << "Joaozinho " << sj << endl;
   
   return 0;
}

