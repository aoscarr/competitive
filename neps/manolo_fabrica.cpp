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
int s[MAXN];

int main(){
    desync;
    cin >> n;
    int a=0,b=0,c=0,v[5] = {0};
    for(i=0;i < n;i++){
    	cin >> aux;
    	v[aux-1]++;
    	// a = 1,3,5 ; b = 1,4 ; c = 2, 4
    	if(v[0] >= 1 && v[2] >= 1 && v[4] >= 1){
    		a++;
    		v[0]--;
    		v[2]--;
    		v[4]--;
    	}
    	if(v[0] >= 1 && v[3] >= 1){
    		b++;
    		v[0]--;
    		v[3]--;
    	}
    	if(v[1] >= 1 && v[3] >= 1){
    		c++;
    		v[1]--;
    		v[3]--;
    	}
    }
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    return 0;
}
