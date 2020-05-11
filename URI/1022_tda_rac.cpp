#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
	desync;
	int n;

	cin >> n;
	double n1,d1,n2,d2;
	char op1,op2,op3;
	for(int i = 0; i< n; i++){
		cin >> n1 >> op1 >> d1 >> op2 >> n2 >> op3 >> d2;
		int p1, p2;
		if(op2 == '+'){
			p1 = (n1*d2)+(n2*d1);
			p2 = (d1*d2);
		}
		else if (op2 == '-'){
			p1 = (n1*d2)-(n2*d1);
			p2 = (d1*d2);
		}
		else if (op2 == '*'){
			p1 = n1*n2;
			p2 = d1*d2;
		}
		else{
			p1 = n1*d2;
			p2 = n2*d1;
		}

		if(p1 == 0)
			cout << "0/" << p2 << " = 0/1\n";
		else{
			cout << p1 <<"/"<< p2 << " = ";
		
			int maior = max(p1,p2);

			for(int j =2 ; j< maior; j++){
				if(p1 %j == 0 && p2%j == 0){
					p1 /= j;
					p2 /= j;
					j = 1;

				}

			}

			
			cout << p1 <<"/"<< p2 << endl;
		
		}
	}

	return 0;

}