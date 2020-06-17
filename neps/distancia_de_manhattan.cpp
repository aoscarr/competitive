#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
   desync;
   int x0,x1,y0,y1; cin >> x0 >> y0 >> x1 >> y1;
   int x, y;
   x = abs((x0-x1)); y = abs((y0-y1));
   cout << abs((x+y)) << endl;
}
