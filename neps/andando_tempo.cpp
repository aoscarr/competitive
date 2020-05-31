#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int a, b, c;
   
   cin >> a >>  b >> c;
   if(a == b || a == c || b == c || (a + b) == c || (a + c) == b || (b + c) == a
      ) cout << "S\n";
   else cout << "N\n";
}
