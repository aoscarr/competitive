//https://codeforces.com/group/QlsCcB22aH/contest/205217/problem/B
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
     int a, b, c, d, misha, vasya; cin >> a >> b >> c >> d;

     misha = max( ((3*a)/10), (a - (a/250) * c) );
     vasya = max( ((3*b)/10), (b - (b/250) * d) );

     if(misha > vasya) cout << "Misha\n";
     else if(misha < vasya) cout << "Vasya\n";
     else cout << "Tie\n";
}
