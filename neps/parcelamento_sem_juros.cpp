#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
   desync;
   int i=0,val, p,r, soma=0;
   
   cin >> val >> p;
   int v[p];
   
   r = val % p;
   for(int i=0;i <p; i++) v[i] = val/p;
   int cont = 0;
   while(r >0){
      if (r >= p){
         cont++;
         soma++;
         r -= p;
      }
      else{
         v[i++]++;
         r--;
         if(i == p) i = 0;
         
      }
   }
   for(int i =0; i < p;i++){
      cout << v[i]+soma << endl;
   }
   
}
