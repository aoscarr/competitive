#include <bits/stdc++.h>

using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ss second
#define ff first
#define pb push_back

int order(pair<int, string> a, pair<int, string> b){
	if(a.ff != b.ff)
		return a.ff > b.ff;
	return a.ss < b.ss;
}
int main(){
	desync;
	map<string, pair<int, int>>mapa; // nome = pts , ultimoTempoLido
	map<string, pair<int, int>>::iterator it;
	vector<pair<int, string>> v;
	int contV = 0,n, k,m = 0, time;
	string nome;
	pair<string, int> par;
	cin >> n >> k;

	for(int i =0; i < n; i++){
		cin >> nome >> time;
		if(!mapa.count(nome)){
			mapa[nome] = make_pair(25, time);
		}else{
			if(time >= mapa[nome].ss + k){
				mapa[nome].ff+= 25;
				mapa[nome].ss = time;
			}
		}
	}
	it = mapa.begin();
	while(it != mapa.end()){
		v.pb(make_pair((*it).ss.ff, (*it).first));
		// cout << (*it).first << " - " << (*it).ss.ff << " - " << (*it).ss.ss << endl;
		it++;
	}
	sort(v.begin(), v.end(), order);
	cout << "--Rank do Nepscord--\n";
	for(int i =0; i < 3; i++){
		cout << "#" << i+1 << ".";
		if(i < v.size()){
			int nvl = v[i].ff / 100 + 1;
			cout << " " << v[i].ss << " - Nivel "<< nvl;
		}
		cout << endl;
	}
	return 0;
}