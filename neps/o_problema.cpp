#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n, cont_op = 0;
   
   cin >> n;
   
   while(n > 1){
      if(n % 2 == 0) n /= 2;
      else n = 3*n+1;
      cont_op++;
   }
   
   cout << cont_op << endl;
}
