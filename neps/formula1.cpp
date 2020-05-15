#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

struct piloto{
	int id, pts;
};
void zeraVetor(piloto v[], int p){
	for(int i=0; i<p;i++){
			v[i].id = i+1;
			v[i].pts = 0;
		}
}
int order(piloto a, piloto b){
	if(a.pts != b.pts)
		return a.pts > b.pts;
	return a.id < b.id;
}
int main(){
	desync;
	int g,p,s,k, aux;
	cin >> g >> p;

	while(g != 0 && p != 0){
		int mat[g][p];
		piloto pilotos[p];
		zeraVetor(pilotos, p);
		
		for(int i=0; i < g; i++)
			for(int j=0; j< p; j++)
				cin >> mat[i][j];

		cin >> s; //sistema de pontuacao
		for(int i=0; i<s; i++){
			cin >> k; // qtd pilotos no podio
			zeraVetor(pilotos, p);
			int pontos[p];
			for(int j=0;j<p;j++) 
				pontos[j] = 0;

			for(int j=0; j<k;j++)
				cin >> pontos[j]; //pontuacao ganha pelo j-esimo piloto

			for(int j=0; j<p; j++)
				for(int h =0; h< g; h++)
					pilotos[j].pts += pontos[ (mat[h][j]-1) ];
				
			sort(pilotos, pilotos+p, order); 
			
			for(int z =0; z < p; z++){
				cout << pilotos[z].id << " ";
				if(z == p-1 || pilotos[z].pts > pilotos[z+1].pts){
					break;
				}
			}
			cout << endl;
		}


		cin >> g >> p;
	}
}