#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
  desync;
  int i,n,aux;
  cin >> n;
  vector<int>h,m;
  for(i=0;i<n;i++){
    cin >> aux;
    h.pb(aux);
  }
  for(i=0;i<n;i++){
    cin >> aux;
    m.pb(aux);
  }
  sort(h.rbegin(),h.rend());
  sort(m.begin(),m.end());
  for(i=0;i<n;i++)
    cout << h[i] << " " << m[i] << endl;
  return 0;
}
