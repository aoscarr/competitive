#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define pb push_back
#define ii long long
using namespace std;


int main(){
   desync;
   int i,aux, a, b, c;
   vector<int> v(3);
   cin >> a >> b >> c;
   v[0] = a; v[1] = b; v[2] = c;

   sort(v.begin(),v.end());
   //swap(v[0],v[1]);
   //cout << v[0] << " " << v[1] << " " << v[2] << "\n";
   if(v[1] > 30 || v[0] > 12) cout << "invalida\n";
   else if(v[0]<= 12 && v[1] <=12) cout << "ambigua\n";
   else if(a == c || a ==b || b==c)cout << "ambigua\n";
   else if(v[0] <= 12 && v[1] <= 12)cout << "ambigua\n";
   else if(v[1] <= 30 && v[2] <= 30) cout << "ambigua\n";
   else{
         if(a<=30 && b<=12) cout<<"d-m-a"<<endl;
         else if(a<=30 && c<=12) cout<<"d-a-m"<<endl;
         else
         if(b<=30 && c<=12) cout<<"a-d-m"<<endl;
         else
         if(b<=12 && c<=30) cout<<"a-m-d"<<endl;
         else
         if(a<=12 && b<=30) cout<<"m-d-a"<<endl;
         else
         if(a<=12 && c<=30) cout<<"m-a-d"<<endl;
         
          
      
   }
   return 0;
}
