#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

typedef int element;

int i, j, k, m, n, cont = 0;
vector<element>v;

int main(){
	desync;
	int vt[17];
	int kung, lu;
	// 1 -> master kung, 9 -> master lu
	for(i=1; i<=16; i++){
		cin >> vt[i];
		if(vt[i] == 1) kung = i;
		else if(vt[i] == 9) lu = i;
	}
	if( (kung == 1 && lu == 2) || (kung == 3 && lu == 4) || (kung == 5 && lu == 6)   ||
		(kung == 7 && lu == 8) || (kung == 9 && lu ==10) || (kung == 11 && lu == 12) ||
		(kung ==13 && lu ==14) || (kung == 15 && lu == 16) || 

		(lu == 1 && kung == 2) || (lu == 3 && kung == 4) || (lu == 5 && kung == 6)   ||
		(lu == 7 && kung == 8) || (lu == 9 && kung ==10) || (lu == 11 && kung == 12) ||
		(lu ==13 && kung ==14) || (lu == 15 && kung == 16) 
		) cout << "oitavas\n";
	

	else if((kung > 8 && lu < 9) || (kung < 9 && lu > 8)) cout << "final\n";

	else if( (kung <=4 && (lu >= 5 && lu <=8))    || 
		     (lu <=4 && (kung >= 5 && kung <=8))  || 
		     (kung >= 9 && kung <= 12 && (lu >= 13 && lu <=16))    ||
		     (lu >= 9 && lu <= 12 && (kung >= 13 && kung <=16)) ) cout <<"semifinal\n";

	else cout << "quartas\n";

}
