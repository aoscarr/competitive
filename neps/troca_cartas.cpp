#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int contA = 0, contB = 0,aux,n,m;
	set<int> a, b;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> aux;
		a.insert(aux);
	}
	for(int i=0; i<m; i++){
		cin >> aux;
		b.insert(aux);			
	}

	for(auto i = a.begin(); i != a.end(); i++){
		if(!b.count(*i))
			contA++;
	}
	for(auto i = b.begin(); i != b.end(); i++){
		if(!a.count(*i))
			contB++;
	}
	cout << min(contA, contB) << endl;

}