#include <iostream>
#include <vector>

using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
	desync;
	long long n, aux, maior=0,i;
	vector<long long> v,res;
	int temNegativo = 0;
	
	cin >> n;

	for(i =0; i< n;i++){
		cin >> aux;
		v.pb(aux);
		if(aux < 0)
			temNegativo++;
	}
	if(temNegativo <= 1)
		maior = v[v.size()-1] * v[v.size()-2] * v[v.size()-3];
	else{
		maior = v[0];
		maior *= v[1];
		maior *= v[v.size()-1];
		maior = max(maior, (v[v.size()-1] * v[v.size()-2] * v[v.size()-3]));
	}
	cout << maior<< endl;
}