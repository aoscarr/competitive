#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ii long long
#define forn(i, n) for(ii i=0;i<n;i++)
using namespace std;
int main(){
   desync;
   ii n;
   cin>>n;
   ii pot = 1;
   int cont = 0;
   while(pot <= n) {
      pot += pot;
      cont ++;
   }
   
   cout << cont << endl;
   return 0;
}
