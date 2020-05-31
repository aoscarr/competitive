#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int c, cont = 0;
	char estrada;

	cin >> c;
	for(int i =0; i < c; i++){
		cin >> estrada;
		if(estrada == 'P' || estrada == 'C')
			cont += 2;
		else if(estrada == 'A')
			cont++; 
	}
	cout << cont << endl;
}