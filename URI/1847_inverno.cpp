#include <iostream>

using namespace std;

int main(){
   int a,b,c;

   cin >> a >> b >> c;

   if(a > b && c >= b) // caso 1
      cout << ":)\n";
   else if(b > a && c <= b) // caso 2
      cout << ":(\n";
   else if(b > a && c > b){
      if((c-b) < (b-a)) // caso 3
         cout << ":(\n";
      else
         cout << ":)\n"; // caso 4
   }
   else if(a > b && b > c){
      if((b-c) < (a-b))
         cout << ":)\n"; // caso 5
      else
         cout << ":(\n"; // caso 6
   }
   else if(a == b){
      if (c > b)
         cout << ":)\n";
      else
         cout << ":(\n";
   }
}
