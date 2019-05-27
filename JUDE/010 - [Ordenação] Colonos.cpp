#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct col{
  int id;
  double nota;
};
bool cmp(col a, col b){
  return a.nota > b.nota;
}
int main(){
  desync;
  int i,n,c;
  cin >> n >> c;
  col aux;
  vector<col> v;
  for(i=0;i<n;i++){
    cin >> aux.nota >> aux.id;
    v.pb(aux);
  }
  sort(v.begin(),v.end(),cmp);
  for(i=0;i<c;i++) cout << v[i].id << endl;
  return 0;
}
