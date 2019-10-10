#include <iostream>
#include <string.h>

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
   desync;
   int n,i, v1,v2,count=1;
   string j1,j2;  
   cin >> n;
   while(n != 0){
      cin >> j1 >> j2;
      cout << "Teste " << count++ << endl;
      for(i=0;i<n;i++){
         cin >> v1 >> v2;
         if( (v1+v2) %2 == 0 )
            cout << j1 << endl;
         else
            cout << j2 << endl;
      }
      cin >> n;
      if(n != 0)
         cout << endl;
   }
  
}
