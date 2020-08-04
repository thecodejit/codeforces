//Author :: Soumyajit Dey (TheCodejit)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define magic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std; 
 int main(){
     int t;
     cin >> t;
     while(t--){
         int l, r;
         cin >> l >> r;
         if(2*l > r){ cout << -1 << ' ' << -1 << '\n';}
         else{ cout << l << ' ' << 2*l << '\n';}
     }
     return 0;
 }
