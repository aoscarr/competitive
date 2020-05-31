#include <iostream>
#include <string>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	string num, quase = "";
	long long int i,qtd4 = 0, qtd7 = 0 ;
	cin >> num;
	bool flag = true, tem[2] = {false, false};
	for(i=0; i< num.size();i++){
		
		if(num[i] == '4'){ 
			qtd4++;
			tem[0] = true;
		}
		else if (num[i] == '7') {
			qtd7++;
			tem[1] = true;
		}
		else flag = false;
	}
	
			long long int qtd = qtd4 + qtd7;

			if((qtd % 4 == 0 && qtd / 4 == 1) || (qtd % 7 == 0 && qtd / 7 == 1) )
				cout << "YES\n";
			else
				cout << "NO\n";	
}