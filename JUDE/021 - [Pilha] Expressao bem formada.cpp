#include <iostream>
#include <stack>
#include <string>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
  desync;
  stack<char> pilha;
  char aux;
  string exp;
  cin >> exp;
  for(size_t i =0;i <exp.size(); i++){
    aux = exp[i];
    if(aux == '{' || aux == '[' || aux == '(')
      pilha.push(aux);
    else{
      if(pilha.empty() || ( (aux == ')' && pilha.top() != '(') || (aux == ']' && pilha.top() != '[') || (aux == '}' && pilha.top() != '{')) ){
        cout << "MAL\n"; 
        return 0;
      }
      else pilha.pop();
    }
  }
  if(pilha.empty())
   cout << "BEM\n";
  else cout << "MAL\n";
  return 0;
}
