#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
   desync;
   int n; cin >> n;
   n = n%1000;
   if(n == 0) cout << "0\n";
   else
      cout << (1000 - n) << endl;
   
}
