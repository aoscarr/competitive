#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
   desync;
   int a1,d1,a2,d2;
   bool a = true, b = true;
   
   
   cin >> a1 >> d1 >> a2 >> d2;
   if(d1 != a2) a = false;
   if(d2 != a1) b = false;
   
   if(a && b || !a && !b) cout << "-1\n";
   else if (a) cout << "1\n";
   else if (b)cout << "2\n";
}
