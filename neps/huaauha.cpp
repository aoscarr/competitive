#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	string ris, pal="";
	cin >> ris;
	string inv = ris;
	int cont = 0;
	for(int i =0; i<ris.size();i++)
		if(ris[i] == 'a' || ris[i] == 'e' || ris[i] == 'i' || ris[i] == 'o' || ris[i] == 'u')
			pal += ris[i];
	for(int i = pal.size()-1; i>= 0 ; i--){
		if(pal[i] != pal[cont]){
			cout << "N\n";
			return 0;
		}
		cont++;
	}	
	cout << "S\n";
}