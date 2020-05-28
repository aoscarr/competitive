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
int i,j,n, m, k, aux, cont=0;
vector<int> v;

int main(){
    desync;
    cin >> n >> k;
    for(i=0 ; i< n; i++){
    	cin >> aux;
    	v.pb(aux);
    }
    sort(v.rbegin(), v.rend());
    if(v[k-1] != v[k]) cout << k << endl;
    else{
    	cont = k;
    	for(i = k-1; i < n-1; i++){
    		if(v[i] != v[i+1]){
    			break;
    		}
    		cont++;
    	}
    	cout << cont << endl;
    }
    return 0;
}
