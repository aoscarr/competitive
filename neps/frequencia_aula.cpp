#include <iostream>
#include <set>
using namespace std;

int main(){
	int n,aux;
	cin >> n;
	set<int> s;
	for(int i =0; i< n;i++){
		cin >> aux;
		s.insert(aux);
	}
	cout << s.size() << endl;
}