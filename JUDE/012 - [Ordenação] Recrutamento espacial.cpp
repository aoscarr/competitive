#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct cand{
  string name;
  int n1, n2;
};
bool cmp(cand a, cand b){
  return (a.n2 > b.n2 || (a.n2 == b.n2 && a.n1 > b.n1));
}
int main(){
  desync;
  int i,n;
  cand aux;
  cin >> n;
  vector<cand> v;
  for(i=0;i<n;i++){
    cin >> aux.name >> aux.n1 >> aux.n2;
    v.pb(aux);
  }
  sort(v.begin(), v.end(), cmp);
  for(i=0;i<3;i++)
    cout << v[i].name << endl;
  return 0;
}
