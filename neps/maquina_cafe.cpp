#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
   desync;
   int menor = INT_MAX,a1,a2,a3,s1,s2,s3;
   
   cin >> a1 >> a2 >> a3;
   
   s1 = a2 * 2 + a3 * 4;// em a1 
   s2 = 2 * (a1 + a3); // em a2
   s3 = a1 * 4 + a2 * 2;
   
   menor = min(s1,s2);
   menor = min(menor,s3);
   
   cout << menor << endl;
}
