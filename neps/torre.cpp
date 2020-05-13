#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main (){
	desync;
	int i,j,n;
	cin >> n;
	int mat[n][n], linha[n], coluna[n];
	int maior = -1;
	int menor = 101;
	for (i = 0; i < n; i++)
	{
		linha[i] = 0;
		coluna[i] = 0;
	}
	for(i = 0;i<n;i++){
		for (j = 0; j < n; j++){
			cin >> mat[i][j];
			linha[i] += mat[i][j];
			coluna[j] += mat[i][j];
		}
	}
	for(i = 0; i<n; i++){
		for(j=0;j<n;j++){
			int val = mat[i][j];
			int soma = linha[i] + coluna[j] - 2*val;
			maior = max(soma, maior);
		}
	}

	cout << maior << endl;
	
}