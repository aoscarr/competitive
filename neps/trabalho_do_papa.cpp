#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
int main(){
   desync;
   int n,p,r, cont = 0; cin >> n;
   vector<pair<int,pair<int,int>>> v;
   queue<pair<int,pair<int,int>>> fila;
   
   for(int i = 0; i < n; i++){
      cin >> p >> r;
      if(p <= r)
         v.pb( make_pair((r-p), make_pair(p,r)) );
   }
   sort(v.rbegin(),v.rend());
   
   cout << "pts - peso - resistencia\n";
   for(int i =0 ; i < v.size(); i++) {
      fila.push(v[i]);
      cout << v[i].first << " - " << v[i].second.first << " - " << v[i].second.second << endl;
   }
   cout << endl << endl;
   
   int aux = 0;
   for(int i = 1; i < v.size(); i++){
      if(v[aux].first >= v[i].second.first){
      
      }
   }
   
}
