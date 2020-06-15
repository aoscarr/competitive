#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
int main(){
	desync;
	int n;
	cin >> n;
	string pal;
	for(int i =0; i< n;i++){
		cin >> pal;
		if(pal[pal.size()-2] == 'p' && pal[pal.size()-1] == 'o') cout << "FILIPINO\n";
		else if(pal[pal.size()-5] == 'm' && pal[pal.size()-4] == 'n' && pal[pal.size()-3] == 'i' && pal[pal.size()-2] == 'd'
			&& pal[pal.size()-1] == 'a')
			cout << "KOREAN\n";
		else cout << "JAPANESE\n";
	}
}