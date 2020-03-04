#include <bits/stdc++.h>
using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	string a,b;
	do{
		cin >> a;
		b = "";
		for(int i =0;i<a.size; a++){
			if(a[i] == '@')
				b += 'a';
			else if(a[i] == '&')
				b += 'e';
			else if(a[i] == '!')
				b += 'i';
			else if(a[i] == '*')
				b += 'o';
			else if(a[i] == '#')
				b += 'u';
			else
				b += a[i];
		}
		cout << b;
		
	}while(a);
}