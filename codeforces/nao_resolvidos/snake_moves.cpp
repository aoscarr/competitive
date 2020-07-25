#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
typedef long long ll;

int main(){
   desync;
   int x=0,y=0,n,count = 0; cin >> n;
   char vez;
   map<pair<int,int>, bool> mapa;
   pair<int,int> aux;
   mapa[make_pair(0,0)] = true;
   for(int i =0; i < n; i++){
     cin >> vez;
     if(vez == 'R') x++;
     else if(vez == 'L') x--;
     else if(vez == 'U')y++;
     else y--;
     aux = make_pair(x,y);
     if(mapa.count(aux) == 1){
       cout << count << endl;
       return 0;
     }
     mapa[aux] = true;
     count++;
   }
   cout << count << endl;

   return 0;

}
