#include <bits/stdc++.h>

using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	int n, aux;
	cin >> n;
	set<int>conj;

	for(int i =0; i<n; i++){
		cin >> aux;
		conj.insert(aux);
	}
	cout << conj.size() << endl;
	return 0;
}