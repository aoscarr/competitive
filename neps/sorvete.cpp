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
#define ss second
#define ff first

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	int p, s, ini, fim;
	cin >> p >> s;
	vii v,v2;

	for(int i =0; i < s; i++){
		cin >> ini >> fim;
		v.pb(make_pair(ini, fim));
	}

	sort(v.begin(),v.end());
	v2.pb(v[0]);
	for(int i=1;i < v.size();i++){
		if(v[i].ff <= v2[v2.size()-1].ss){
			if(v[i].ss > v2[v2.size()-1].ss)
				v2[v2.size()-1].ss = v[i].ss;
		}
		else
			v2.pb(v[i]);
	}
	for(int i = 0; i < v2.size(); i++)
		cout << v2[i].ff << " " << v2[i].ss << endl;

	return 0;
}