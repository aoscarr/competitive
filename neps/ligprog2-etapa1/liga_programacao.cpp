#include <iostream>
using namespace std;
int main(){
 	int n, time;
    cin >> n;
    time = n - 9;
    if(time >= 0) cout << time << endl;
    else{
    	cout << (time + 24) << endl;
    }
}