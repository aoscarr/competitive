#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n,s, aux, val_min = INT_MAX;
   
   cin >> n >> s;
   val_min = s; 
   for(int i =0 ; i< n; i++){
      cin >> aux;
      s += aux;
      val_min = min(val_min, s);
   }
   cout << val_min << endl;
}
