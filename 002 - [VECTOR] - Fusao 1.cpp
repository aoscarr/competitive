#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
int main() {
  desync;
  int i,j,n, aux;
  vector<int> v;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> aux;
    v.pb(aux);
  }
  cout << v[0]<< " ";
  aux = v[0];
  for(i=1; i<v.size();i++){
    if(v[i] == v[i-1]+1)
      aux = v[i]; 
    else {
      cout << aux << endl << v[i] << " ";
      aux = v[i];
    }
  }
  cout << aux << endl;
}
