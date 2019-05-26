#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct tree{
   string name;
   int h;
};
bool cmp(tree a, tree b){
   return (a.h > b.h);
}
int main(){
   desync;
   int i,n,c;
   tree aux;
   vector<tree>v;
   cin >> n >> c;
   for(i=0;i<n;i++){
      cin >> aux.name >> aux.h;
      v.pb(aux);
   }
   sort(v.begin(),v.end(),cmp);
   for(i=0;i<c;i++){
      cout << v[i].name << endl;
   }

}
