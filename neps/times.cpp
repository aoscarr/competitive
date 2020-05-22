#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ff first
#define ss second
#define pb push_back

int main(){
	desync;
	int hab,n,equipes, k =0 ;
	string nome;
	pair<int, string> jogador;
	vector<pair<int,string>> jogadores;
	cin >> n >> equipes;
	cout << fixed << setprecision(2);
	for(int i =0; i< n; i++){
		cin >> jogador.ss >> jogador.ff;
		
		jogadores.pb(jogador);
	}

	sort(jogadores.begin(), jogadores.end(), greater<pair<int,string>>());
	
	for(int j=0;j<equipes;j++){
		k = j;
		vector<string> aux;
		cout << "Time " << j+1 << endl;
		for( ; k < jogadores.size(); k+=equipes)
			aux.pb(jogadores[k].ss);

		sort(aux.begin(), aux.end());

		for(int i =0 ; i < aux.size(); i++) 
			cout << aux[i] << endl;
		cout << endl;
		
	}
	return 0;
}