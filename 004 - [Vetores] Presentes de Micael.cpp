#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main() {
  desync;
  int i,n, md=0;
  cin >> n;
  int v[n];
  for(i=0;i<n;i++){
    cin >> v[i];
    md += v[i];
  }md /= n;
  for(i=0;i<n;i++){
    cout << v[i] <<": ";
    if(v[i] >= md) 
      cout << "Sim!\n";
    else 
      cout << "Nao!\n";
  }
}
