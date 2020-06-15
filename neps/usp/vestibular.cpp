#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
	desync;
	int n,cont=0;
	string a,b;
	cin >> n >> a >> b;

	for(int i =0; i <a.size();i++){
		if(a[i] == b[i]) cont++;
	}
	cout << cont << '\n';
}