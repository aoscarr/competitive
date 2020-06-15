#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int l, a, p, R;
   cin >> l >> a >> p >> R;
   
   if((sqrt(pow(l,2)+pow(a,2)+pow(p,2)))<=2*R) cout<<"S\n";
   else cout<<"N\n";
  
}
