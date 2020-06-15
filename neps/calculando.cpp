#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int m,vez = 1;
   cin >> m;
   string val, res;
   char aux;
   while(m != 0){
      cin >> val;
      res = "";
      int v[m], total = 0, num=0,cont=0,cont2=0;
      char op[m];
      
      for(int i=0; i < val.size(); i++){
         aux = val[i];
         
         if(aux == '+' || aux == '-' || i == (val.size()-1)){
            if(i == (val.size()-1)) res += aux;
            if(res.size() == 1) num = (int)res[0]-48;
            else if(res.size() == 2) num = ((int)res[0]-48)*10 + ((int)res[1]-48);
            else num = ((int)res[0]-48)*100 + ((int)res[1]-48)*10 + ((int)res[2]-48);
            v[cont++] = num;
            if(aux == '+' || aux == '-') op[cont2++] = aux;
            
            res = "";
         }else
            res += aux;
         
      }
      total = v[0];
      for(int i = 0; i < cont2 ; i++){
         if(op[i] == '+') total += v[i+1];
         else total -= v[i+1];
      }
      cout << "Teste " << vez++ << endl;
      cout << total << endl << endl;
      
      
      cin >> m;
   }   
}


