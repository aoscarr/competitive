#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int i, n, aux, v_ant;
	bool flag = false;

	cin >> n;
	
	int v[n];
	for(i =0 ; i < n ; i++)
		cin >> v[i];

	v_ant = v[0];

	for(i=1; i < n-1; i++){
		if(v[i] < v_ant && v[i] < v[i+1])
			flag = true;
		v_ant = v[i];
	}
	if(flag) cout << "S\n";
	else cout << "N\n";

}