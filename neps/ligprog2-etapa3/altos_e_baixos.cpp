#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int n, cont=0, aux = 0; cin >> n;
   int saida[n];
   string dias; cin >> dias;

   for(int i = 0 ; i < dias.size(); i++){
   		saida[i] = cont + aux;

   		if(dias[i] == 'A') cont++;
   		else if(dias[i] == 'B' && (cont+aux) > 0) cont--;
   		else if(dias[i] == 'B' && (cont+aux) == 0){
   			i = 0;
   			cont = 0;
   			aux++;
   		}
   		cout << "saida[i]: " << saida[i] << endl;
   		
   }
   cout << endl << endl;
   if(dias[n-2] == 'A')
   		saida[n-1] = saida[n-2]+1;
   else 
   		saida[n-1] = saida[n-2]-1;

   cout << saida[0];
   for(int i = 1; i < n; i++){
   		cout << " " << saida[i];
   }
   cout << endl;
   
}
