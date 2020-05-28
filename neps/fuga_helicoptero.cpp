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
	int h,p,f,d;
	cin >> h >> p >> f >> d;
	if(d == -1){
		if( (f > h && p > f)  || (f < h && p > f)
			(p > f && (h < f || (h > f )  )))
			cout << "S\n";
		else cout << "N\n";
	}
}