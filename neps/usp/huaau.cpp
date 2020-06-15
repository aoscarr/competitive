#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
	desync;
	string a,b= "";
	int cont =0;
	cin>> a;

	for(int i =0; i < a.size();i++){
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u')
			b+=a[i];
	}

	for(int i = b.size()-1; i >= 0; i--){
		if(b[i] != b[cont]){
			cout << "N\n";
			return 0;
		}
		cont++;
	}
	cout << "S\n";
}