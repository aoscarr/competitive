#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
struct pais{
  int id;
  int med;
};
bool cmp(pais a, pais b){
  return (a.med > b.med || (a.med == b.med && a.id <= b.id));
}
int main(){
   desync;
   int i,j, np, nesp, aux;
   cin >> np >> nesp;
   vector<pais> vp;
   pais p;
   for (size_t i = 0; i < np; i++){
     p.id=i+1;
     p.med=0;
     vp.pb(p);
   }

   for (size_t i = 0; i < nesp; i++) {
     for (size_t j = 0; j < 3; j++) {
       cin >> aux;
       vp[aux-1].med++;
     }
   }
   sort(vp.begin(),vp.end(),cmp);
   cout << vp[0].id;
   for (size_t i = 1; i < vp.size(); i++)
     cout << " " << vp[i].id;
   cout << endl;
   return 0;
}
