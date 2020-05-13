#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int n, a, b;
	char op;
	cin >> n >> a >> op >> b;

	if(op == '+'){
		if((a + b) <= n)
			cout << "OK\n";
		else
			cout <<"OVERFLOW\n";
	}else{
		if((a*b) <= n)
			cout << "OK\n";
		else
			cout <<"OVERFLOW\n";
	}
	return 0;
}