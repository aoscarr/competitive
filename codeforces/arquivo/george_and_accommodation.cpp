//https://codeforces.com/group/QlsCcB22aH/contest/205217/problem/A
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
     int n; cin >> n;
     int aco, tot, count = 0;
     for(int i =0; i < n; i++){
          cin >> aco >> tot;
          if((tot-aco) >= 2) count++;
     }
     cout << count << endl;
}
