#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int A,B,C,D;
	cin >> A >> B >> C >> D;
	 if ((A < (B+C)) && (A > fabs(B-C)) ||
	    	(A < (B+D)) && (A > fabs(B-D)) ||
	    	(A < (C+D)) && (A > fabs(C-D)) ||
   	    	(B < (A+C)) && (B > fabs(A-C)) ||
	    	(B < (A+D)) && (B > fabs(A-D)) ||
	    	(B < (C+D)) && (B > fabs(C-D)) ||
  	    	(C < (A+B)) && (C > fabs(A-B)) ||
  	    	(C < (A+D)) && (C > fabs(A-D)) ||
	    	(C < (B+D)) && (C > fabs(B-D)) ||
	    	(D < (A+B)) && (D > fabs(A-B)) ||
	    	(D < (A+C)) && (D > fabs(A-C)) ||
	    	(D < (B+C)) && (D > fabs(B-C)))
	        cout << "S\n";
	    else
	        cout << "N\n";
	return 0;
}