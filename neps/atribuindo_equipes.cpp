#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	desync;
	int a,b,c,d,t1,t2;

	cin >> a >> b >> c >> d;
	t1 = a+d;
	t2 = b+c;
	if(t1 > t2) cout << (t1 - t2) << endl;
	else cout << (t2 - t1) << endl;
}