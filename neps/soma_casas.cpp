#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
   desync;
   int n,i,j,k,valor;
   
   cin >> n;
   
   int vet[n];
   
   for(i = 0; i < n; i++)
      cin >> vet[i];
   cin >> k;
   
   valor = k-1;
   i = 0;
   j = n - 1;
   while(valor != k){
      valor = vet[i] + vet[j];
      if(valor < k)
         i++;
      else if(valor > k)
         j--;
      else{
         cout << vet[i] << " " << vet[j] << endl;
         break;
      }
   }
   
}
