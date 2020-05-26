#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ii long long

int main(){
	desync;
	ii n, aux;
	vector<ii>v;
	
	cin >> n;
	for(ii i; i < n; i++){
		cin >> aux;
		v.pb(aux);
	}
	sort(v.rbegin(), v.rend());
	for(ii i; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
}