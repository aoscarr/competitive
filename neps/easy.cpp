#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << x << endl;
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define MAXN 10005
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define endl '\n'

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	int n, v[3], qtd =0;
	cin >> n >> v[0] >> v[1] >> v[2];
	sort(v, v+3);
	if(n >= v[0]){
		qtd++;
		n -= v[0];
	}
	if(n >= v[1]){
		qtd++;
		n -= v[1];
	}if(n >= v[2]){
		qtd++;
		n -= v[2];
	}
	cout << qtd << endl;
	return 0;
}