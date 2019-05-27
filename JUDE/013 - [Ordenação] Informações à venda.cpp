#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct user{
  string name;
  int val;
};
bool cmp(user a, user b){
  return a.val > b.val;
}
int main(){
  desync;
  int i,n,c;
  user aux;
  vector<user>v;
  cin >> n >> c;
  for(i=0;i<n;i++){
    cin >> aux.name >> aux.val;
    if(aux.name == "Nark") continue;
    v.pb(aux);
  }
  sort(v.begin(),v.end(),cmp);
  for(i=0;i<c;i++){
    cout << v[i].name << endl;
  }

}
