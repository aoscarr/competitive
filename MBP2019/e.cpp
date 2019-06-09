#include <iostream>
#include <vector>
#include <cmath>
#define first x
#define second y
using namespace std;

struct point { int x, y; };
int main() {
    int n, k;
    cin >> n >> k;
    vector <point> v (n);
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[i] = point {a, b};
    }
    
    for(int i = 0; i < n; i++) {
        point p = v[i];
        bool good = true;
        for(int j = 0; j < n; j++) {
            point p2 = v[j];
            if(i == j) continue;
            int dx = abs(p.x - p2.x);
            int dy = abs(p.y - p2.y);
            int d = dx > dy ? dx : dy;
            if( d < k ) {
                cout << "YES" << endl;
                good = false;
                break;
            } 
        }
        if(good) cout << "NO" << endl;
    }
}
