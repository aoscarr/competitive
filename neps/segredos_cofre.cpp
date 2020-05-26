#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector <int> vi;
typedef vector <pii> vii;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << x << endl;
#define fst first
#define snd second
#define pb push_back
#define endl '\n'
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())

const ll modn = 1000000007;
inline ll mod(ll x) { return x % modn; }
const int MAXN = 212345;
int i,j,n, m, k;
int v[MAXN], val[11];

int main(){
    desync;
    int aux, pos=0, sentido=1;
    cin >> n >> m;

    for(i=0;i<=10;i++)
    	val[i] = 0;
    for(i=0; i<n;i++)
    	cin >> v[i];
    cin >> aux;
    val[v[0]]++;
    for(i=1; i<m; i++){
    	cin >> aux;
    	if(aux > pos){
    		for(j=pos+1; j < aux; j++){
    			val[v[j]]++;
    		}
    	}
    	else{
			for(j=pos-1; j >= aux -1; j--){
    			val[v[j]]++;
    		}
    	}     	
    	pos = aux - 1;
    }

    for(i=0; i< 10; i++){
    	cout << val[i] << " ";
    }
    cout << endl;
    return 0;
}		
