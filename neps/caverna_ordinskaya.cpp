#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;

	long long n, m, metros =0;

	cin >> n >> m;

	long long v[n+1];

	for(int i=1;i<=n;i++)
		cin >> v[i];

	for(int i=1;i<=n; i++){
		
		if(min(v[i], m - v[i]) >= v[i-1])
			v[i] = min(v[i], m - v[i]);
		else if(max(v[i], m - v[i]) >= v[i-1])
			v[i] = max(v[i], m - v[i]);
		else{
			cout << "-1\n";
			return 0;
		}
	}
	for(int i =1; i<=n;i++)
		metros += v[i];
	cout << metros << endl;
}