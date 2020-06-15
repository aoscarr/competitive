#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define fst first
#define snd second
#define pb push_back

int main(){
	desync;
	int n, num, qtd = 0;
	map<int,pair<int,int>>mapa;
	vector<pair<int,char>>v;
	cin >> n;
	char lado;

	for(int i=0; i < n;i ++){
		cin >> num >> lado;
		v.pb(make_pair(num, lado));
		mapa[num] = make_pair(0,0);
		
	}

	for(int i=0; i < v.size();i++){
		if(v[i].snd == 'E')
			mapa[v[i].fst].fst++;
		else
			mapa[v[i].fst].snd++;
	}
	for(auto i = mapa.begin(); i != mapa.end(); i++){
		qtd += min( ((*i).snd.fst) , ((*i).snd.snd));
	}
	cout << qtd << endl;
}