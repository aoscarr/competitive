#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct bim{
  int ini,fim;
};
bool cmp(bim a, bim b){
  return a.ini < b.ini || (a.ini == b.ini && a.fim < b.fim) ;  
}
int main(){
  desync;
  int i,n,t;
  cin >> n;
  bim aux;
  vector<bim>v(n);
  for(i=0; i<n; i++)
    cin >> v[i].ini >> v[i].fim;
  
  sort(v.begin(),v.end(),cmp);
  cout << v[0].ini << " ";
  for(i=0;i<n-1;i++)
    if(v[i+1].ini > v[i].fim)
      cout << v[i].fim << "\n" << v[i+1].ini << " ";
  cout << v[v.size()-1].fim << endl;
  return 0;
}
