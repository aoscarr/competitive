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
int i,j,n, m, res = 0;
int s[MAXN];

int main(){
    desync;
    map<int, pair<int, int>> mapa;
    pair<int, char> aux;
    vector<pair<int, char>> v;
    cin >> n;
    for(i = 0; i< n ; i++){
    	cin >> aux.fst >> aux.snd;
    	mapa[aux.fst] = make_pair(0,0);
    	v.pb(aux);
    } 
    for(i = 0; i < n ; i++){
    	if(v[i].snd == 'D')
    		mapa[v[i].fst].snd++;
    	else
    		mapa[v[i].fst].fst++;
    }
    for(auto i = mapa.begin() ; i != mapa.end(); i++ ){
    	res += min((*i).snd.fst , (*i).snd.snd);
    }
    cout << res << endl;
    return 0;
}
