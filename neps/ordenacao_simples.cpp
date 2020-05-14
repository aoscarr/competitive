#include <iostream>
#include <algorithm>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n;
	cin >> n;
	int v[n];
	for(int i =0 ;i < n; i++)
		cin >> v[i];

	sort(v,v+n);

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}