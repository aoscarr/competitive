#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector <int> vi;
typedef vector <pii> vii;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << x << endl;
#define fst first
#define snd second
#define pb push_back
#define endl '\n'
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())

const ll modn = 1000000007;
inline ll mod(ll x) { return x % modn; }
const int MAXN = 212345;
int i,j,n, m, k;
int s[MAXN];

int main(){
    desync;
    int ha,ma,hr,mr;
    cin >> ha >> ma >> hr >> mr;

    i = ha * 60 + ma + 45;
    j = hr * 60 + mr;
    if(i <= j) 
    	cout << "Sucesso\n";
    else
    	cout << "Atrasado " << (i-j) << endl;
    return 0;
}
