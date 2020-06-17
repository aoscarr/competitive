#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int ca,ba,pa,cr,br,pr,cont=0;cin >> ca >> ba >> pa >> cr >> br >> pr;
   if(cr > ca) cont += (cr - ca);
   if(br > ba) cont += (br - ba);
   if(pr > pa) cont += (pr - pa);
   
   cout << cont << endl;
}
