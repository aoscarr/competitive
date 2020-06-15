#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
	desync;
	int n;

	cin >> n;
	int mat[n][n],linha[n] = {0}, coluna[n] = {0}, maior = INT_MIN;

	for(int i=0;i < n;i++){
		for(int j=0;j <n;j++){
			cin >> mat[i][j];
			linha[i] += mat[i][j];
			coluna[j] += mat[i][j];
		}
	}
	for(int i=0;i < n;i++){
		for(int j=0;j <n;j++){
			int val = mat[i][j];
			int soma = linha[i] + coluna[j] - 2* val;
			maior = max(maior,soma);
		}
	}
	cout << maior << endl;

}