#include <iostream>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   int i,j,n, val,cont,contGeral;
   
   while(cin >> n){
      contGeral=0;
      for(i=0;i<n;i++){
         cont = 0;
         for(j=0;j<n;j++){
            val = 0;
            if(i == j)
               val = 2;
            if( (i+j) == (n-1))
               val = 3;
            if(i >= n/3 && j >= n/3){
               if(j > n/2)
                  cont--;
               else if(j < n/2)
                  cont++;
               if(i > n/2)
                  contGeral--;
               else if(i < n/2)
                  contGeral++;   
      
               if(cont >= 0 && contGeral >= 0)
                  val = 1;
               
            }
            if(i == n/2 && j == n/2)
               val = 4;
            cout << val;
                     
         }
         cout << endl;      
      }
      cout << endl;
   }
}
