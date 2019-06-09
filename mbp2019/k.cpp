#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define pb push_back
#define ii long long
#define ff first
#define ss second
#define pais pair<string, pair<int, int>>

using namespace std;
bool comp(const pais & pa, const pais & pb) {
   return pa.ss.ss > pb.ss.ss ||
    pa.ss.ss == pb.ss.ss && pa.ss.ff > pb.ss.ff ||
     pa.ss.ss == pb.ss.ss && pa.ss.ff == pb.ss.ff && pa.ff < pb.ff;
}
int main(){
   desync;
   map<string,pair<int,int>> mapa;
   vector<pair<string, pair<int, int> >> v;
   string aux, aux2;
   int n, ga, gb;
   pair<int,int>p;
   forn(i,4){
      cin >> aux;
      mapa[aux] = pair<int, int> {0, 0};
   }
   cin >> n;
   forn(i,n){
      cin >> aux >> ga >> aux2 >> gb;
      mapa[aux].ff += ga - gb;
      mapa[aux2].ff += gb - ga;
      if(ga == gb) {
         mapa[aux].ss++;
         mapa[aux2].ss++;
      }
      else if(ga > gb)
         mapa[aux].ss+=3;
      else 
         mapa[aux2].ss+=3;   
      
   }
   for(auto & e : mapa) {
      v.pb(pair<string, pair<int, int>> {e.ff, pair<int, int> {e.ss.ff, e.ss.ss}});
   }
   sort(v.begin(),v.end(), comp);
   cout<<v[0].ff<<endl;
   cout<<v[1].ff<<endl;
   return 0;
}
