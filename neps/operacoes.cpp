#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main (){
	
	desync;
	cout << fixed << setprecision(2);
	char op;
	double a,b;

	cin >> op >> a >> b;

	if(op == 'M')
		cout << (a*b) << endl;
	else
		cout << (a/b) << endl;
}