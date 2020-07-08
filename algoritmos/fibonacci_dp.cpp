// Forma Top-Down

#include <iostream>
#include <cstring> // biblioteca do memset

#define MAXN 1000100

int n, dp[MAXN]; // declaro n e o vetor auxiliar

int fib(int x){ // declaro a função int fib(int x)
  
  // se já calculei, alguma vez, o valor de fib(x)
  if(dp[x]!=-1) return dp[x]; // retorno o que está salvo em dp[x]
  
  // se não, calculo a função normalmente
  if(x==0) return 0; // se x=0, retorn 0
  if(x==1) return 1; // se x=1, retorn 1
  
  // se não era nenhum dos casos base
  dp[x]=fib(x-1)+fib(x-2); // calculo o valor de fib(x) e salvo em dp[x]
  
  return dp[x]; // para só então retornar o valor que deixei salvo lá
}

int main(){
  
  memset(dp, -1, sizeof(dp)); // faço todos as posições de dp receberem o valor -1
  
  cin >> n; // leio o valor de n
  
  cout << fib(n) << "\n"; // e imprimo o valor de fib(n)
  
  return 0;
}

//--------------------------------------------------------------------------------------//

//Forma Bottom-Up

#include <iostream>

#define MAXN 1000100

int fib[MAXN], n; // declaro n e o vetor que usarei na dp

int main(){
  
  cin >> n; // leio o valor de n
  
  fib[0]=0; // defino os casos base da dp
  fib[1]=1; 
  
  // faço a dp na abordagem Bottom-Up
  for(int i=2; i<=n; i++){
    fib[i]=fib[i-1]+fib[i-2];
  }

  cout << fib[n] << "\n" // e imprimo o valor salvo em fib[n]
  
  return 0;
}
