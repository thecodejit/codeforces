//Author :: Soumyajit Dey (TheCodejit)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define magic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
int main()
{
    magic;
    ll int t;
    cin >> t;
    
    t = t*(t+1)/2;
    if(t%2){cout << 1;}
    else {cout << 0;}
    
}