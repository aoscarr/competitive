#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define pb push_back
#define ii long long
using namespace std;
int main(){
   desync;
   int qua=0,qui=0,sex=0,n,m,aux,ac;
   
   set<int>v,s;
   forn(i,6){
      cin >> aux;
      v.insert(aux);
   }
   cin >> n;
   forn(i,n){
      cin >> m;
      ac=0;
      forn(j,m){
         cin >> aux;
         if(v.count(aux)) ac++;
      }
      if(ac == 4) qua++;
      else if(ac == 5) qui++;
      else if(ac == 6) sex++;
   }
   cout << sex << " " << qui << " " << qua << endl; 
   return 0;
}
