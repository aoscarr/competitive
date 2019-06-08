#include <iostream>
#include <stack>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   string ler;
   cin >> ler;
   char aux;
   stack<char> pilha;
   for(size_t i =0; i<ler.size();i++){
      aux = ler[i];
      if(aux == '(' || aux == '[' || aux == '{')
         pilha.push(aux);
      else{
         if(pilha.empty() || ( (aux == ')' && pilha.top() != '(' ) || (aux == ']' && pilha.top() != '[' ) || (aux == '}' && pilha.top() != '{') ) ){ 
            cout << "NAO\n";
            return 0;
         
         }
         else 
            pilha.pop();
      }
   }
   if(pilha.empty()) cout << "SIM\n";
   else cout << "NAO\n";
   return 0;
}
