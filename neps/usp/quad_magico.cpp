#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
	desync;
	int n, d_princ = 0, d_sec = 0;
	cin >> n;
	int mat[n][n],lin[n] = {0},col[n] = {0};

	for(int i =0;i < n;i++){
		for(int j=0; j<n;j++){
			cin >> mat[i][j];
			if(i == j) d_princ += mat[i][j];
			if( (i + j) == n-1) d_sec += mat[i][j];
			lin[i] += mat[i][j];
			col[j] += mat[i][j];
		}
	}
	if(d_princ != d_sec){
		cout << "-1\n";
		return 0;
	}
	else{
		for(int i =0; i < n; i++){
			if(d_princ != lin[i]){
				cout << "-1\n";
				return 0;
			}
		}
		for(int i=0; i < n; i++){
			if(d_princ != col[i]){
				cout << "-1\n";
				return 0;
			}
		}
	}
	cout << d_princ << endl;
}