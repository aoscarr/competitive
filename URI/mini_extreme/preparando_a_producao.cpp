#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
struct num{
     int a,b;
};
vector<num> v;
int main(){
     desync;
     int i, n,soma,menor = INT_MAX, maior = INT_MIN;
     while(cin >> n){
          vector<num> v;
          num aux;
          soma = 0; menor = INT_MAX; maior = INT_MIN;
          for(i = 0; i < n; i++){
               cin >> aux.a;
               aux.b = 0;
               v.pb(aux);
               // menor = min(menor, aux);
          }
          for(i = 0; i < n; i++){
               cin >> aux.b;
               v[i].b = aux.b;
          }
          aux = v[i];
          int i, j;
          for(i = 1; i < v.size(); i++){
               aux = v[i];
               j = i - 1;
               while(j >= 0 && aux.a < v[j].a ){
                    soma += (v[j].b + v[j+1].b);

                    v[j+1] = v[j];
                    v[j] = aux;
                    j--;
               }
               v[j+1] = aux;
          }
          cout << soma << endl;
     }
}
