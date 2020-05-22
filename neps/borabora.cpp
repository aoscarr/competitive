#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back


struct carta{
	int valor;
	char naipe;
};
bool cmp(carta a, carta b){
	if( a.valor != b.valor)
		return true;
	if(a.naipe != b.naipe)
		return true;
	return false;
}



struct jogador{
	int id;
	vector<carta> cartas;
};
struct ven{
	bool is;
	int id;
};
int ordem(carta a, carta b){
	if(a.valor != b.valor)
		return a.valor > b.valor;
	return a.naipe > b.naipe;
}

int main(){
	desync;
	int i,k,h, p,m,n;
	vector<carta> monte;
	vector<jogador> players;
	jogador player;
	carta carta_lida, topo;
	ven vencedor; 

	cin >> p >> m >> n; // p = numJogadores, m = numCartas p/cada jogador, n = numCartas no baralho embaralhado 
	
	for(i=1;i<=p;i++){
		player.id = i;
		players.pb(player);
	}
	k = 1;
	h = 0;
	for(i=0; i < n; i++ ){
		cin >> carta_lida.valor >> carta_lida.naipe;
		
		if(i >= p*m) {
			k = 10000;
			monte.pb(carta_lida);
		}
		else{
			if(k <= p && k <= m){
				players[h].cartas.pb(carta_lida);
			}
			else{
				k = 1;
				h++;
				players[h].cartas.pb(carta_lida);
			}

			k++;
		}

	}
	//monte ta ok
	for(i = 0; i< players.size(); i++) 
		sort(players[i].cartas.begin(), players[i].cartas.end(), ordem);

	topo = monte[0];
	vencedor.is = false;
	int sentido = 1;
	int jog_vez = 0;
	cout << topo.valor << " " << topo.naipe << endl;
	while(!vencedor.is){
		bool encontrada = false;
		for(i = 0 ; i < players[jog_vez].cartas.size(); i++){
			if(players[jog_vez].cartas.valor == topo.valor || players[jog_vez].cartas.naipe == topo.naipe){
				encontrada = true;
				
				break;
			}

		}
		vencedor.is = true;
			}
	}


	for(i = 0; i < players.size() ;	 i++){
		// cout << monte[i].valor << " - " << monte[i].naipe << endl;
		cout << "jogador " << players[i].id << endl;
		for(int j=0; j< players[i].cartas.size(); j++){
			cout << players[i].cartas[j].valor << " : " << players[i].cartas[j].naipe << endl;
		}
		cout << "-------" << endl;
	}
}