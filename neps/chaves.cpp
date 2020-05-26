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
    // desync;
    cin >> n;
    stack<char> pilha;
    string pal[n], msg = "N\n";
    cin.ignore();
    for(i = 0; i< n; i++){
    	getline(cin, pal[i]);
    }
    for(i = 0; i < n; i++){
    	for(j=0; j < pal[i].size(); j++){
    		if(pal[i][j] == '}' && pilha.empty()){
    			cout << msg;
    			return 0;
    		}else if(pal[i][j] == '{'){
    			pilha.push(pal[i][j]);
    		}
    		else if(pal[i][j] == '}')
    			pilha.pop();
    	}
    }
    if(!pilha.empty())
    	cout << msg;
    else cout << "S\n";
    return 0;
}
