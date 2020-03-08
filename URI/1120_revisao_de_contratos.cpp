#include <iostream>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int i;
	string d,n,aux;

	cin >> d >> n;
	while(d != "0" && n != "0"){
		aux = "";
		for(i=0;i<n.size();i++)
			if(n[i] != d[0])
				aux += n[i];

		
		while(aux[0] == '0')
			aux.erase (0,1);
		
		if(aux.size() == 0)
			aux = "0";
			
		

		cout << aux << endl;
		cin >> d >> n;
		
	}
}