#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
	desync;

	int n,m, i, cont, aux;
	vector<int> vetId, v;

	cin >> n;
	
	for(i =0 ; i < n ; i ++){
		cin >> aux;
		v.pb(aux);
	}

	cin >> m;
	for(i =0; i< m; i++){
		cin >> aux;
		vetId.pb(aux);
	}
	
	sort(vetId.begin(), vetId.end());

	for(i=0;i<n;i++){
		if(!binary_search(vetId.begin(), vetId.end(), v[i]))
			cout << v[i] << " ";
	}
	cout << endl;
}