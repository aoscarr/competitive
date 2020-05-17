#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

struct cons{
	int ini, fim;
};
int compare(cons a, cons b){
	return a.fim < b.fim;
}
int main(){
	desync;
	int i, n, cont = 0, disp=0;

	cin >> n;
	cons consulta[n];

	for(i=0; i< n; i++)
		cin >> consulta[i].ini >> consulta[i].fim;
	

	sort(consulta,consulta+n,compare);
	for(i=0; i<n;i++){
		if(consulta[i].ini >= disp){
			cont++;
			disp = consulta[i].fim;
		}
	}
	cout << cont << endl;


}