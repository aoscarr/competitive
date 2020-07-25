//https://codeforces.com/contest/1352/problem/C
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
     int size; cin >> size;
     unsigned long long int n,k, cont = 1;
     for(int i =0; i < size; i++){
          cin >> n >> k;

          for(unsigned long long int i = 1; i <= k; ){
               if((cont % n) != 0) i++;
               cont++;
          }
          cout << cont-1 << endl;
     }
}
