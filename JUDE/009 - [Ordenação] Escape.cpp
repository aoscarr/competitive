#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
bool cmp(double a,double b){
  return a>b;
}
int main(){
  desync;
  cout << fixed << setprecision(2);
  int i,n;
  double aux;
  vector<double>v;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> aux;
    v.pb(aux);
  }
  sort(v.begin(),v.end(),cmp);
  for(i=0;i<3;i++) cout << v[i] << endl;

  return 0;
}
