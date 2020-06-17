#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
   desync;
   int n,x0,x1,y0,y1,ins=0, val;
   cin >> n;
   for(int i=0;i <n;i++){
      cin >> x0 >> y0 >> x1 >> y1;
      val = pow( (x0-x1), 2 ) + pow ( (y0-y1), 2 );
      ins += val;
   }
   cout << ins << endl;
}
