#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
   int N;
   cin >> N;
   int seq[N];
   for ( int i = 0; i < N; i++ )
      cin >> seq[i];
   int res = 1;
   for ( int i = 2; i < N; i++ )
      if ( abs(seq[i]-seq[i-1]) != abs(seq[i-1]-seq[i-2]) )
         res++;
  
   cout << res << endl;
}
