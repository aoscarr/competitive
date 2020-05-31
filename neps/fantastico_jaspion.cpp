#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int t,n,m;
	map<string, string> mapa;
	string pal, trad, aux;

	cin >> t;

	for(int i=0; i < t; i++){
		mapa.clear();
		cin >> m >> n;
		aux = "";
		for(int j =0; j < m; j++){
			cin >> pal;
			cin.ignore();
			getline(cin, trad);
			mapa[pal] = trad;
		}

		for(int j =0; j <n; j++){
			getline(cin, trad);
			aux = "";

			for(int h = 0; h < trad.size(); h++){
				
				if(trad[h] != ' ' && h < trad.size() - 1)
					aux += trad[h];
				else{
					if(h == trad.size()-1)
						aux += trad[h];
					if(mapa.count(aux))
						cout << mapa[aux];	
					else
						cout << aux;
					cout << " ";					
					aux = "";
				}
					
			}
			cout << endl;
		}
		if( i < t-1)
			cout << endl;

		
	}
}