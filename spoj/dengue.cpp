#include<bits/stdc++.h>
using namespace std;

vector<int> ajd[102];

int dist[102];

void dfs(int v){
   for(int x : adj[v]){
      if(dist[x] != -1) continue;
      dist[x] = dist[v] +1;
      dfs(x);
   }
}

int main(){
   int n; cin >> n;
   while( n != 0){
      for(int i=0;i < n-1;i++){
         adj[a].push_back(b);
         adj[b].push_back(a);
      }
      for(int i = 1; i <= 
   }
