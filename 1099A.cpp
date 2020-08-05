//Author :: Soumyajit Dey (TheCodejit)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define magic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
int main()
{
    magic;
    int w,h,u1, u2, d1, d2,tw;
    
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    
    
    tw = w; 
    for(int i = h; i > 0; --i){
        
        tw += i;
        if(i==d1){
         tw -= u1;
         if(tw<0){tw=0;}}
        if(i==d2){
         tw -= u2;
         if(tw<0){tw=0;}}
        
    }
    cout << tw;
    
    
    
}