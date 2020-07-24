#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int k, x,y; cin >> k >> x >> y;
   
   if(k <= abs((x-y))) cout << "EH SUFICIENTE\n";
   else cout << "NAO EH SUFICIENTE\n";
}
