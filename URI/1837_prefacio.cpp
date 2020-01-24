#include <iostream>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

 // WA 5%
 
int main(){
     while(true){
     int a, b,q,r;
     cin >> a >> b;
     r = a%b;

     q = (a - r)/b;
     if(r < 0){
          if(q < 0)
               q--;
          else if(q>0)
               q++;
     }

     r = a - b*q;

     cout << q << " " << r << endl;
     }
}
