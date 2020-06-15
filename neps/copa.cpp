#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

int main(){
   desync;
   int kung, lu;
   
   cin >> kung >> lu;
   
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
