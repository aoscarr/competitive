#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
	desync;
	int n,q,li,lf,ci,cf, cont =0;

	cin >> n;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0; j<n;j++){
			cin >> mat[i][j];
		}
	}
	cin >> q;
	for(int k =0 ; k < q; k++){
		cin >> li >> ci >> lf >> cf;
		for(int i=li-1;i<lf;i++){
			for(int j=ci-1; j<cf;j++){
				cont += mat[i][j];
				mat[i][j] = 0;
			}
		}
	}
	cout << cont << endl;

}