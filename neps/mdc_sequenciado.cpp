#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int i,n,out,menor = INT_MAX; cin >> n;
   int v[n];
   bool flag=true;
   
   for(i =0;i < n;i++ ){
      cin >> v[i];
      menor = min(menor, v[i]);
   }
   
   i = menor;
   
   for(i; i > 0; --i){
      flag = true;
      for(int j=0; j < n; j++){
         if(v[j]%i != 0){
            flag = false;
            break;
         }
      }
      if(flag){
         cout << i << endl;
         return 0;
      }
  }
}

