#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int fib(int);

int main(){
	desync;
	
	int n;
	cin >> n;
	cout << fib(n) << endl;
}

int fib(int n){
	if(n <= 1)
		return 1;
	return fib(n-1) + fib(n-2);
}