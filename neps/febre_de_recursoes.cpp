#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

const int MAXN = 10000;
long long dp[MAXN];
long long a[5000000];

long long func(int k, int n, int m){
   if(dp[k] != -1) return dp[k];
   
   dp[k] = 0;
   for(int i = 1; i <= n; i++){
      dp[k] += (a[i] * func((k-i),n,m) )%m;
      dp[k] = (dp[k])%m;
   }
   return dp[k];
}
int main(){
   desync;
   memset(dp,-1, sizeof(dp));
   int n,k,m; cin >> n >> k >> m;
   
   for(int i=1; i <= n; i++) cin >> a[i];
   for(int i=1; i <= n; i++) cin >> dp[i];
   
   cout << func(k,n,m) << endl;
}
/* solucao Bottom-up
   int aux,i,j,n,k,m; cin >> n >> k >> m;
   long long a[n+1];
   for(i = 1; i <= n; i++) cin >> a[i];
   for(i = 1; i <= n; i++) 
      cin >> v[i];
   if(k <= n)  cout << v[k] << endl;
   else{
      for(i = n+1; i <= k; i++){
         for(j=1; j <= n; j++){
            aux = i - j;
            if(aux <= 0) aux = 1;
            v[i] += (a[j] * v[aux]);
         }
      }
      cout << (v[k]%m) << endl;
   }
   */


