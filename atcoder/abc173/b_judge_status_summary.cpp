#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
int error[4];
int main(){
   desync;
   int n; cin >> n;
   string erro;
   
   for(int i =0 ; i < n ; i++){
      cin >> erro;
      if(erro == "AC") error[0]++;
      else if(erro == "WA") error[1]++;
      else if(erro == "TLE") error[2]++;
      else error[3]++;
   }
   cout << "AC x " << error[0] << endl;
   cout << "WA x " << error[1] << endl;
   cout << "TLE x "<< error[2] << endl;
   cout << "RE x " << error[3] << endl;
   
   return 0;
}
