#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

struct piloto{
	int id, pts, posicao[100];
};

int main(){
	desync;
	int g,p;
	cin >> g >> p;

	while(g != 0 && p != 0){
		piloto vet[p];
		int aux,contPos = 0;
		for(int i =0;i<p;i++){
			vet[i].pts = 0;
			vet[i].id = i+1;
		}
		for(int i=0; i < g; i++){
			for(int j=0; j< p; j++){
				cin >> aux;
				vet[i].posicao[contPos++]

			}
		}


		cin >> g >> p;
	}
}