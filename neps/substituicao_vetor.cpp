#include <bits/stdc++.h>
using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int v[10], menor = INT_MAX;

	for(int i =0 ; i < 10; i++){
		cin >> v[i];
		menor = min(menor, v[i]);
	}
	cout << "Menor: " << menor << endl << "Ocorrencias:";
	for(int i =0; i < 10; i ++){
		if(v[i] == menor) 
			cout << " " << i;
	}
	cout << endl;
	for(int i =0; i < 10; i++){
		if(v[i] == menor)
			cout << "-1 ";
		else
			cout << v[i] << " ";
	}
	cout << endl;
}