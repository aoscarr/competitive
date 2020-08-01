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
     string a,pal="", ans = ""; cin >> a;
     for(int i = 0; i < a.size(); i++) if(a[i] != 'a') pal+=a[i];

     int ini = 0,cont = 0, fim = a.size()-1;
     int maior = INT_MIN;

     while(ini <= fim){
          if(pal[ini] == pal[fim]){
               // ans += pal[ini];
               if(ini != fim) cont+=2;
               else cont++;
               ini++; fim--;
          }
          else fim--;
     }
     cout << cont << endl;
}
