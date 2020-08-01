#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

int main(){
     desync;
     int n; cin >> n;

     while(n != 0){
          int size, qtd, tot = 0;
          for(int i =0; i < n; i++){
               cin >> size >> qtd;
               if(qtd % 2 != 0) qtd--;
               tot += qtd;
          }
          cout << (tot/4);
          cin >> n;
     }
     cout << endl;
}
