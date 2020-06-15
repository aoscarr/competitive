#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   string val;
   cin >> val;
   int soma = 0, pen, ult, dois_ult;
   
   for(int i =0; i < val.size(); i++)
      soma += (int)val[i]-48;
   
   if(val.size() == 1) dois_ult = (int)val[val.size()-1]-48;
   else{
      pen = (int)val[val.size()-2]-48;
      ult = (int)val[val.size()-1]-48;
      dois_ult = pen * 10 + ult;
   }
   
   if(dois_ult == 0 || dois_ult % 4 == 0) cout << "S\n";
   else cout << "N\n";
   
   if(soma % 9 == 0) cout << "S\n";
   else cout << "N\n";
   
   if(dois_ult == 25 || dois_ult == 50 || dois_ult == 75 || dois_ult == 0) cout << "S\n";
   else cout << "N\n";
   
}
