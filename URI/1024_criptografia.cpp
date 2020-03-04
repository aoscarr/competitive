#include <bits/stdc++.h>
using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n,i,j,aux;
	string pal, res, rod2, rod3;
	cin >> n;
	cin.ignore();
	for(i = 0; i < n; i++){

		getline(cin, pal);
		res = "";
		rod2 = "";
		rod3 = "";
		for(j=0;j<pal.size();j++){ //maius - minus
			if( ((int)pal[j] >= 65 && pal[j] <= 90)  || (pal[j] >= 97 && pal[j] <= 122))
				res += (char)((int)pal[j]+3);
			else
				res += pal[j];		
		}
		for(j=res.size()-1; j>=0; j--)
			rod2 += res[j];
		for(j=rod2.size()/2; j < res.size(); j++){
			aux = rod2[j];
			aux --;
			rod2[j] = (char)aux;
		}
		cout << rod2 << endl;
		
	}
}