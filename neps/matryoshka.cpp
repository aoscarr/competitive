#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'



int main(){
	desync;
	int n, cont =0;
	cin >> n;
	int v[n], aux[n];
	vector<int> vec;
	for(int i=0; i<n; i++){
		cin >> v[i];
		aux[i] = v[i];
	}
	sort(v, v+n);

	for(int i =0; i< n; i++){
		if(v[i] != aux[i]){
			vec.push_back(v[i]);
	 			cont++;
		}
	}

	cout << cont << endl;
	sort(vec.begin(), vec.end());
	for(int i =0; i< vec.size(); i++)
		cout << vec[i] << " ";
	if(!vec.empty())
		cout << endl;
}	