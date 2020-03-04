#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int p,n, q, hatual;
	cin >> p >> n;
	cin >> q;
	hatual = q;
	for(int i=1; i<n; i++){
		cin >> q;
		if(q > (hatual + p) || q < (hatual - p)){
			cout << "GAME OVER\n";
			return 0;
		}
		hatual = q;
	}
	cout << "YOU WIN\n";
	return 0;
}