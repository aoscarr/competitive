#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
typedef long long ll;

int main(){
   desync;
   int i,n,min_eqp = 11, min_qst = 11,aux; cin >> n;
   
   for(i = 0; i < n ; i++){
      cin >> aux;
      min_eqp = min(min_eqp, aux);
   }
   for(i = 0; i < 10; i++){
      cin >> aux;
      min_qst = min(min_qst, aux);
   }
   if(min_eqp >= min_qst) cout << "10\n";
   else cout << min_eqp << endl;
   
}
