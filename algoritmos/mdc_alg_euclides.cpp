// ruim
#include <iostream>

using namespace std;

int mdc(int a, int b){
  for(int i = min(a, b); i > 0; --i){
    if(a%i == 0 && b%i == 0){
        return i;
    }
  }
}
// algoritmo de Euclides
#include <iostream>

using namespace std;

int mdc(int a, int b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}
//algoritmo de Euclides resumido
#include <iostream>

using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b)); //b == 0 ? Caso sim, retorne a, caso não, retorne mdc(b, a%b)
}

