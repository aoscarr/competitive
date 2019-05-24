#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
int main() {
  desync;
  int i,n,c,aux;
  vector<int> v;
  cin >> n >> c;
  v.pb(0);
  for(i=1;i<=n;i++){
    cin >> aux;
    v.pb((aux + v[i-1]));
  }
  for(i=0;i<c;i++){
    cin >> aux >> n;
    cout << (v[n]-v[aux-1]) << endl;
  }
}
