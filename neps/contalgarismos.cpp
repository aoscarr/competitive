#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n,i,j, alg[10];
	string numeros;
	cin >> n;
	for(i = 0 ; i < 10 ; i++) 
		alg[i] = 0;

	for(i=0; i<n ; i++){
		cin >> numeros;
		for(j=0;j<numeros.size();j++){
			if(numeros[j] == '0')
				alg[0]++;
			else if(numeros[j] == '1')
				alg[1]++;
			else if(numeros[j] == '2')
				alg[2]++;
			else if(numeros[j] == '3')
				alg[3]++;
			else if(numeros[j] == '4')
				alg[4]++;
			else if(numeros[j] == '5')
				alg[5]++;
			else if(numeros[j] == '6')
				alg[6]++;
			else if(numeros[j] == '7')
				alg[7]++;
			else if(numeros[j] == '8')
				alg[8]++;
			else
				alg[9]++;
		}
	}

	for(i=0;i<10;i++){
		cout << i << " - " << alg[i] << endl;
	}
}

