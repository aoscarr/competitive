#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int n;
int visited[n];
void dfs(int);

int main(){
   desync;
}

void dfs(int v){
   visited[v] = 1;
   for(int x : adj[v]){
   // se o visitei e ele nao é o meu pai, eh pq eu achei um segundo caminho. => tem circuito no grafo 
      if(visited[x]) continue; // adapto aqui para achar circuito. Se ele for diferente de meu pai, tem circuito
      pai[x] = v;
      dfs(x);
   }
}
//serve para descobrir se um grafo tem circuito!
