//https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::syns_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<pii>

int main(){
     int i, n, uni,dez, cent, mil, valor, cont; cin >> n;

     for(i = 0 ; i < n; i++){
          cin >> valor; cont = 0;
          if(valor <= 10 || valor == 100 || valor == 1000 || valor == 10000){
               cout << "1\n" << valor << endl;
               continue;
          }
          mil = valor / 1000; valor = valor % 1000;
          cent = valor / 100; valor = valor % 100;
          dez = valor / 10; valor = valor % 10;
          uni = valor;
          if(mil != 0)cont++;
          if(cent != 0)cont++;
          if(dez != 0)cont++;
          if(uni != 0)cont++;
          cout << cont << endl;
          if(mil != 0) cout << mil << "000 ";
          if(cent != 0) cout << cent << "00 ";
          if(dez != 0) cout << dez << "0 ";
          if(uni != 0) cout << uni;
          cout << endl;
     }
}
