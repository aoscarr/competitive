#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define endl '\n'

int main(){
	desync;
	map<int, int> mapa, saida;
	int c,n, id, version;

	cin >> c >> n;

	for(int i =0; i< c ; i++){
		cin >> id >> version;
		mapa[id] = version;
	}
	for(int i =0; i < n; i++){
		cin >> id >> version;
		if(!mapa.count(id)){
			mapa[id] = version;
			saida[id] = version;
		}
		else{
			if(version > mapa[id]){
				mapa[id] = version;
				saida[id] = version;
			}
		}
	}

	for(auto i = saida.begin(); i != saida.end(); i++){
		cout << i -> first << " " << i -> second << endl;
	}
}