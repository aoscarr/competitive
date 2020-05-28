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
int s[MAXN];

int main(){
    desync;
    int mat[3][3],diag_principal=0, diag_secundaria = 0, linha[3]={0}, coluna[3]={0};

    for(i=0;i < 3; i++){
    	for(j=0;j < 3; j++){
    		cin >> mat[i][j];
    		if(i == j) 
    			diag_principal += mat[i][j];
    		if( (i+j) == 2)
    			diag_secundaria += mat[i][j];
    		linha[i] += mat[i][j];
    		coluna[j] += mat[i][j]; 
    	}
    }
    if(diag_secundaria == diag_principal && diag_principal == linha[0] && linha[0] == linha[1] && 
    	linha[1] == linha[2] && linha[2] == coluna[0] && linha[0] == coluna[1] && linha[0]==coluna[2])
    	cout << "SIM\n";
    else
    	cout << "NAO\n";
    return 0;
}
