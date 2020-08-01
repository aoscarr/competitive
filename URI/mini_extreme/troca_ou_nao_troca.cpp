#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

int main(){
     desync;
     int n,p,r;
     while(cin >> n){
          int p_atual, pos = 0,maior = INT_MIN;
          vector<pair<int,int>> v;
          for(int i = 0; i < (n-1); i++){
               cin >> p >> r;
               v.pb(mp(p, r));
               if(p > maior){
                    maior = p;
                    pos = i;
               }
          }
          int cont = 0;
          if(v[pos].ss == 0) cont++;
          for(int i = (pos+1); i < v.size(); i++){
               if(v[i].ss == 1) cont++;

          }
          cout << cont << endl;
     }
}
