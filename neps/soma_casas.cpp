#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
   desync;
   int aux,n,k;
   cin >> n;
   vector<int>v;
   for(int i =0; i < n; i++){
      cin >> aux;
      v.pb(aux);
   }
   cin >> k;
   
   for(int i=0; i< n;i++){
      for(int j = i+1; j < n; j++){
         if(v[i] + v[n-1] < k) break;
         

         if( (v[i] + v[j] == k) ){
            cout << min(v[i], v[j]) << " " << max(v[i],v[j]) << endl;
            return 0;   
         }
         if((v[i] + v[j] == k)) n/=2;
      }
      
   }
}
