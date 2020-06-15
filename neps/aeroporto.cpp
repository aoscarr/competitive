#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main(){
   desync;
   int i,a,V,x,y,cont = 1;
   
   cin >> a >> V;
   
   while(a != 0 && V != 0){
      int v[a+1] = {0},maior = INT_MIN;
      
      for(i=0; i<V; i++){
         cin >> x >> y;
         v[x]++;
         v[y]++;
      }
      for(i=1; i<= a;i++)
         maior = max(maior,v[i]);
      
      cout << "Teste " << cont++ << endl;

      for(i=1;i <= a; i++){
         if(v[i] == maior) cout << i << " ";
      }
      cout << endl << endl;

      cin >> a >> V;
   }
}
