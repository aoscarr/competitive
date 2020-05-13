#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, acertos = 0;
	string a,b;
	cin >> n >> a >> b;

	for(int i=0; i<n;i++)
		if(a[i] == b[i])
			acertos++;

	cout << acertos << endl;
	
	return 0;
}