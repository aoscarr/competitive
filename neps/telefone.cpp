#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	string number;
	char aux;

	cin >> number;

	for(int i = 0; i < number.size(); i++){
		if(number[i] == 'A' || number[i] == 'B' || number[i] == 'C') cout<<2;
		else if(number[i] == 'D' || number[i] == 'E' || number[i] == 'F') cout<<3;
		else if(number[i] == 'G' || number[i] == 'H' || number[i] == 'I') cout<<4;
		else if(number[i] == 'J' || number[i] == 'K' || number[i] == 'L') cout<<5;
		else if(number[i] == 'M' || number[i] == 'N' || number[i] == 'O') cout<<6;
		else if(number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' || number[i] == 'S') cout<<7;
		else if(number[i] == 'T' || number[i] == 'U' || number[i] == 'V') cout<<8;
		else if(number[i] == 'W' || number[i] == 'X' || number[i] == 'Y' || number[i] == 'Z') cout<<9;
		else cout << number[i];		
	}
	cout << endl;
}