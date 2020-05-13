#include <iostream>

using namespace std;

string title(string F){
	if((int)F[0] > 96) 
		F[0] = (char)(F[0] - 32);
	for(int i =1; i< F.size(); i++){
		if(F[i] == ' ' && i < F.size()-1){
			i++;
			if(F[i] > 96){
				F[i] -= 32;
			}
			
		}
		else if(F[i] != ' ' && F[i] < 97){
			F[i]+= 32;
		}
	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}