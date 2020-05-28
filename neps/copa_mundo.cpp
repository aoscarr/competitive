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
#define ff first
#define ss second
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	queue<char>fila;
	vector<pii>partidas;
	pii partida; 
	int cont =0;
	int tA,tB;

	for(int i=0; i< 16; i++){
		cin >> partida.first >> partida.second;
		partidas.pb(partida);
	}
	for(int i=0; i<8; i++){
		partida = partidas[i];
		if(partida.ff > partida.ss)
			fila.push((char)((int)'A'+cont));
		else
			fila.push((char)((int)'A'+cont+1));
		cont+=2;
	}
	for(int i = 8; i < 15; i++){
		partida = partidas[i];
		tA = fila.front();
		fila.pop();
		tB = fila.front();
		fila.pop();
		if(partida.ff > partida.ss)
			fila.push(tA);
		else
			fila.push(tB);
	}
	cout << fila.front() << endl;
	
	return 0;
}