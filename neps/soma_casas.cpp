#include <iostream>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n, dario = 0, xerxes = 0, a,b;
   
   cin >> n;
   
   for(int i =0; i < n; i++){
      cin >> a >> b;
      if( (a==0 && (b==1 || b==2)) || (a==1 && (b==2 || b==3))  || 
          (a == 3 && (b==0 || b==4)) || (a==2 && (b==4 || b==3))||
          (a == 4 && (b==0 || b==1)) ) dario++;
      else xerxes++;
   }
   
   if(dario >= xerxes) cout << "dario\n";
   else cout << "xerxes\n";
}
