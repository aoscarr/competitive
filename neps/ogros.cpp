#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
	desync;
	int n,m, aux;
   vector<pair<int,int>> intervalo;
   bool flag = true;
	cin >> n >> m;
   
   for(int i = 0; i < n - 1; i++){
      cin >> aux;
      intervalo.pb(make_pair(aux-1,0) );
   }
   intervalo.pb(make_pair(aux,0));
   
   for(int i = 0; i < n; i++){
      cin >> aux;
      intervalo[i].second = aux;
   }
   for(int i =0 ; i < m; i++){
      flag = true;
      cin >> aux;
      for(int j = 0; j < n; j++){
         if(aux <= intervalo[j].first){
            cout << intervalo[j].second << " ";
            flag = false;
            break;
         }
      }
      if(flag) 
         cout << intervalo[n-1].second << " ";
   }
   cout << endl;
}
