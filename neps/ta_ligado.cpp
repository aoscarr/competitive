#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	map<int, vector<int>> mapa;
	int n,m,t,a,b;
	bool flag = true;
	
	cin >> n >> m;
	for(int i=0;i <n;i++)mapa[i+1] = {};
	for(int i=0;i <m;i++){
	   flag = true;
	   cin >> t >> a >> b;
	   if(t == 1){
	      mapa[a].push_back(b);
	      mapa[b].push_back(a);
	   }else{
	      vector<int> v;
         v = mapa[a];
         if(v.size() == 0) {
            cout << "0\n";
         }
         else{
            for(int j =0; j< v.size(); j++){
               if(v[j] == b){
                  cout << "1\n";
                  flag = false;
                  break;
               }
            }
            if(flag) cout << "0\n";
         }
	      
	   }
	
	}
	
}
