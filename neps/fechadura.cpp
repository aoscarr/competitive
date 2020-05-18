#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, m, i, cont =0 ;
	cin >> n >> m;
	int v[n];
	for(i=0;i<n;i++)
		cin >> v[i];
	for(i=0;i+1<n;i++){
		int dif = m - v[i];
		v[i] += dif;
		v[i+1] += dif;
		cont += abs(dif);
	}

	if(v[n-1] != m) cont = -1;
	cout << cont << endl;
	return 0;
	
}