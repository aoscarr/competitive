#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define pb push_back
#define ii long long
using namespace std;
int main(){
   desync;
   int l, c; 
   cin >> l >> c;
   
   char q1[l][c],e; 
   forn(i, l) {
      forn(j, c)
         cin >>  q1[i][j];
   }
   forn(i, l) {
      forn(j, c) {
         cin >> e;
         if(e != q1[i][j])
            cout << i + 1 << " " << j + 1 << endl;
      }
   }
   return 0;
}
