#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
typedef long long ll;

int main(){
   desync;
   ll n; cin >> n;
   int cont = 0;
   
   for(int i = n; i > 0; i-=3){
      if(i >= 2)
         cont += 2;
      else cont++;
   }
   cout << cont << endl;
}
