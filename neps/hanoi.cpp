#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'


int main(){
	desync;
	int n,i=1,j,k;
	cin >> n;

	while(n != 0){
		cout << "Teste "<< i++ << endl;
		j=1;
		for(k=1; k<= n; j*=2) 
			k++;

		cout << j-1 << endl;		


		cin >> n;
	}
	return 0;
}