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
	int a = 12, b = 18, cont= 1;

	while( a <= 38){
		cout << "a = " << a << " <-> b = " << b << endl;
		if( a == 38) break;
		if(cont == 1){
			a += 2;
			b -= 2;
			cont++;
		}
		else if(cont == 2){
			a += 4;
			b -= 4;
			cont++;
		}
		else if(cont == 3){
			a -= 5;
			b += 7;
			cont = 1;
		}
	}
	return 0;
}