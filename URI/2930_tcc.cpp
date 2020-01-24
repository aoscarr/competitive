#include <iostream>
using namespace std;

int main(){

   int e, d;
   cin >> e >> d;

   if(e > d)
      cout << "Eu odeio a professora!\n";
   else if(d-e >= 3)
      cout << "Muito bem! Apresenta antes do Natal!\n";
   else {
      cout << "Parece o trabalho do meu filho!\n";
      e += 2;
      if(e<24)
         cout << "TCC Apresentado!\n";
      else
         cout << "Fail! Entao eh nataaaaal!\n";
   }
}
