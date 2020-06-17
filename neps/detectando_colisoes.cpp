#include<bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
struct ret{
   int x0,y0,x1,y1,xmin,ymin,xmax,ymax;
};
int main(){
   desync;
   ret a, b;
   cin >> a.x0 >> a.y0 >> a.x1 >> a.y1;
   cin >> b.x0 >> b.y0 >> b.x1 >> b.y1;
   a.xmin = min(a.x0,a.x1); a.ymin = min(a.y0,a.y1);
   b.xmin = min(b.x0,b.x1); b.ymin = min(b.y0,b.y1);
   a.xmax = max(a.x0,a.x1); a.ymax = max(a.y0,a.y1);
   b.xmax = max(b.x0,b.x1); b.ymax = max(b.y0,b.y1);
   
   if(a.xmin>b.xmax || b.xmin>a.xmax || a.ymin>b.ymax || b.ymin>a.ymax)
      cout << "0\n";
   else
      cout <<"1\n";

}
