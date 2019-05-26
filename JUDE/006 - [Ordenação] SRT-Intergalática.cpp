#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct plan{
   int id;
   int valor;
};
bool cmp(plan a, plan b){
   return (a.valor > b.valor);
}
int main(){
   desync;
   int i,n;
   plan aux;
   vector<plan> v;
   cin >> n;
   for(i=0;i<n;i++){
      cin >> aux.id >> aux.valor;
      v.pb(aux);
   }
   sort(v.begin(),v.end(),cmp);
   for(i=0;i<n;i++)
      cout << v[i].id << " " << v[i].valor << endl;
   
 
   return 0;  
}
