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
	long n, total_cedulas = 0;
	int v[6] = {100, 50, 25, 10, 5, 1};
	int outro[6] = {0};
	cin >> n;

		for(int i =0 ; n != 0; i++){
			total_cedulas += n / v[i];
			outro[i] = n / v[i];
			n = n% v[i];
		}
	

	cout << total_cedulas << endl;
	for(int i =0; i < 6; i++)
		cout << outro[i] << endl;
	return 0;
}