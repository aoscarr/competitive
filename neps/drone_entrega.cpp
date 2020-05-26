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
    int a,b,c,h,l, area_janela, menor_area_caixa;
    string msg = "N\n";
    cin >> a >> b >> c >> h >> l;

    if(a <= h)
    	if(b <= l || c <= l)
    		msg = "S\n";
    if(a <= l)
    	if(b <= h || c <= h)
    		msg = "S\n";
    if(b <= h)
    	if(a <= l || c <= l)
    		msg = "S\n";
    if(b <= l)
    	if(a <= h || c <= h)
    		msg = "S\n";
    if(c <= h)
    	if(a <= l || b <= l)
    		msg = "S\n";
    if(c <= l)
    	if(a <= h || b <= h)
    		msg = "S\n";

    cout << msg;
    return 0;
}
