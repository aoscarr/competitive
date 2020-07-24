#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   string numeros; cin >> numeros;
   char num_vez = '0';
   int cont = 0, dir,esq;

   for(int i =0 ; i < numeros.size(); i++){
   		dir = abs( ((int)(num_vez) - (int)(numeros[i])));
   		esq = 10 - dir;

   		num_vez = numeros[i];
   		cont += min(dir,esq);
   }
   cout << cont << endl;  
}
