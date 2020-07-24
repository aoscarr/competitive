#include<iostream>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int v[10];

int main(){
   desync;
   int n,num; cin >> n;
   char aux;
   
   for(int i =0; i < 4; i++){
      for(int j =0; j < 4; j++){
         cin >> aux;
         num = ((int)aux) - 48;
         if(num >= 1 && num <= 9)
            v[num]++;
      }
   }
   n *= 2;
   for(int i = 1; i < 10; i++){
      if(v[i] > n) {
         cout << "NO\n";
         return 0;
      }
   }
   cout << "YES\n";
   
   return 0;
}
