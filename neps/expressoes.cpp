#include <bits/stdc++.h>

using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << x << endl;
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define MAXN 10005
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define endl '\n'

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	int n;
	char aux;
	bool bem_definida;
	string pal;
	cin >> n;
	
	for(int i=0;i<n;i++){
		stack<char>pilha;
		bem_definida = true;
		cin >> pal;
		if(pal == "")
			cout << "S\n";
		else{
			for(int j=0; j< pal.size();j++){
				aux = pal[j];
				if(pilha.empty() && (aux == ')' || aux == ']' || aux == '}')){
					bem_definida = false;
					break;
				}
				if(aux == '(' || aux == '[' || aux == '{')
					pilha.push(aux);
				else{
					if( (aux == ')' && (pilha.top() == '[' || pilha.top() == '{')) || 
						(aux == ']' && (pilha.top() == '(' || pilha.top() == '{')) || 
						(aux == '}' && (pilha.top() == '(' || pilha.top() == '['))
						){
						bem_definida = false;
						break;
					}
					pilha.pop();
				}
			
			}
			if(bem_definida && pilha.empty()) cout << "S\n";
			else cout << "N\n";
		}
	}
	return 0;
}