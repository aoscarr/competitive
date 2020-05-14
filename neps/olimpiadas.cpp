#include <iostream>
#include <algorithm>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

struct pais{
	int ouro, prata, bronze, id;
};

int order(pais a, pais b){
	if(a.ouro != b.ouro)
		return a.ouro > b.ouro;
	if(a.prata != b.prata)
		return a.prata > b.prata;
	if(a.bronze != b.bronze)
		return a.bronze > b.bronze;
	
	return a.id < b.id;
}

int main(){
	desync;
	int n,m, ouro, prata, bronze;

	cin >> n >> m;
	pais vet[n];

	for(int i=0; i< n; i++){
		vet[i].ouro = 0;
		vet[i].prata = 0;
		vet[i].bronze = 0;
		vet[i].id = i+1;
	}

	for(int i=0;i < m; i++){
		cin >> ouro >> prata >> bronze;

		vet[ouro-1].ouro++;
		vet[prata-1].prata++;
		vet[bronze-1].bronze++;
	}
	sort(vet,vet+n, order);

	for(int i =0 ; i<n; i++)
		cout << vet[i].id << " ";
	cout << endl;
	return 0;
}