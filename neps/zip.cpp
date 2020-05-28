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
int i,j,n, m, k, aux;
int s[MAXN];

int main(){
    desync;
    int l1,l2,c1,c2, pts_l, pts_c;
    cin >> l1 >> l2 >> c1 >> c2;

   	if(l1 == l2)
   		pts_l = (l1+l2)*2;
   	else if(l1 == l2+1 || l1 == l2-1)
   		pts_l = (l1+l2)*3;
   	else 
   		pts_l = l1 + l2;

   	if(c1 == c2)
   		pts_c = (c1+c2)*2;
   	else if(c1 == c2+1 || c1 == c2-1)
   		pts_c = (c1+c2)*3;
   	else 
   		pts_c = c1 + c2;

   	if(pts_c == pts_l)
   		cout << "empate\n";
   	else if(pts_c > pts_l)
   		cout << "Carolina\n";
   	else
   		cout << "Lia\n";
    return 0;
}
