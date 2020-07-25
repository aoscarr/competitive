#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
int main(){
   desync;
   int i,n, aux; cin >> n; cout << fixed << setprecision(7);
   double media;
   vector<int> v;
   v.pb(-1);
   for(i = 0; i < n; i++){
      cin >> aux;
      v.pb(aux);
   }
   sort(v.begin(), v.end());
   media = 1000000.0;
   double md2;
   for(i = 1; i <= n; i++){
      if (v[i] > i){
         cout << "-1\n";
         return 0;
      }
      
      
      md2 = (double)v[i]/ (double)i;
      media = min(media,md2);
   }
   cout << media << endl;
  
}
