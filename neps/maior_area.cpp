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
int i,j,n, m, k, aux;
int v[MAXN];

int main(){
    desync;
    cin >> i >> j >> m >> n;
    k = i * j;
    aux = m * n;
    if(k > aux)
    	cout << "Primeiro\n";
    else if(k < aux)
    	cout << "Segundo\n";
    else
    	cout <<"Empate\n";
    return 0;
}
