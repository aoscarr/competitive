#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

int main(){
	int d1, h1, m1, d2, h2, m2, seg_01, seg_02;

	cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;

	seg_01 = m1 * 60 + h1 * 3600 + d1 * 3600 * 24;
	seg_02 = m2 * 60 + h2 * 3600 + d2 * 3600 * 24;
	
	cout << (seg_02 - seg_01) << endl;
}