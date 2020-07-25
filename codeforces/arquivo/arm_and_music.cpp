//https://codeforces.com/group/QlsCcB22aH/contest/205217/problem/C
#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::syns_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<pii>

int main(){
     int n,aux, k,cont =0; cin >> n >> k;
     vector<pair<int,int>>v;
     for(int i =0; i < n; i++){
          cin >> aux;
          v.pb(make_pair(aux, i));
     }
     sort(v.begin(), v.end());
     for(int i =0; (i < v.size() && k > 0); i++){
          if(k >= v[i].ff)
               cont++;
          k-=v[i].ff;
     }
     cout << cont << endl;
     for(int i =0 ; i < cont; i++)
          cout <<v[i].ss+1 << " ";
     if(cont > 0)
          cout << endl;

}
