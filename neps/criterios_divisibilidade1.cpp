#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   string n;
   int cont = 0;
   cin >> n;
   if(n[n.size()-1] == '0' || n[n.size()-1] == '2' || n[n.size()-1] == '4' ||
      n[n.size()-1] == '6' || n[n.size()-1] == '8') cout << "S\n";
   else cout << "N\n";

   for(int i = 0; i < n.size(); i++)
      cont += (int)n[i]-48;
   
   if(cont % 3 == 0) cout << "S\n";
   else cout << "N\n";
   
   if(n[n.size()-1] == '0' || n[n.size()-1] == '5') cout << "S\n";
   else cout << "N\n";
}
