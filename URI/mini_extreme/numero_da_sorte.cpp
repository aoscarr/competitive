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
     for(int i = 0; i < n; i++){
          string num; cin >> num;
          sort(num.begin(), num.end());
          if(num[0] == '0'){
               for(int j = 1; j < num.size(); j++){
                    if(num[j] != '0'){
                         swap(num[j], num[0]);
                         break;
                    }
               }
          }
          cout << num << endl;
     }
}
