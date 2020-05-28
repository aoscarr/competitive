#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, aux, cont = 0;
	set<int> tacos;

	cin >> n;

	for(int i =0; i< n; i++){
		cin >> aux;
		if(tacos.count(aux)){
			tacos.erase(aux);
		}else{
			tacos.insert(aux);
			cont += 2;
		}

	}

	cout << cont << endl;
}