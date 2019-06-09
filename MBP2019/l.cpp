#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define pb push_back
#define ii long long
using namespace std;

int main(){
   desync;
   int p,s;
   forn(i, 7){
      s=0;
      forn(j, 7){
         cin >> p;
         s+=p;
      }
      cout << s << endl;
   }
   return 0;
}
