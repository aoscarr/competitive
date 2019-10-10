#include <iostream>

using namespace std;

int main(){
   int n, v1,v2;
   char op;
   
   cin >> n >> v1 >> op >> v2;
   if( (op == '*' && ((v1 * v2) <= n ) ) 
    || (op == '+' && ((v1 + v2) <= n) ))
      cout << "OK\n";
   else 
      cout << "OVERFLOW\n";
}
