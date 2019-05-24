#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main() {
  desync;
  int i,n,c;
  char d;
  bool teste = true;
  cin >> n >> c >> d;
  string pal[n];
  for(i=0;i<n;i++){
    cin>> pal[i];
  if(pal[i][c] != d)
    teste = false;
  }
  if(teste) cout << "Nova Ronda\n";
  else cout << "Descansar\n";
}
