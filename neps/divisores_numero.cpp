#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n,aux = 1,soma = 0;
   vector<int>divisores;
   
   cin >> n;
   while(aux <= n){
      if(n % aux == 0)
         divisores.push_back(aux);
      aux++;
   }
   cout << divisores.size() << " divisor(es):";
   for(int i =0; i < divisores.size(); i++){
      cout << " "<< divisores[i];
      soma += divisores[i];
   }
   cout << endl << "Soma de divisores = " << soma << endl;
   
   if(divisores.size() == 2){
      cout << "Primo\n";
   }else
      cout << "Nao primo\n";
}
