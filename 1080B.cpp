//Author :: TheCodejit
#include <bits/stdc++.h>
 
#define ll long long int
#define newline '\n'
#define space ' '
#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fore(i, l, r) for (int i = int(l); i < int(r); i++)
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 1000000
using namespace std;

ll f(ll x){
    if(x%2==0){
        return x/2;
    }
    else{
        return -x + f(x-1);
    }
}

int main(){
    speed;
    int test;
    cin >> test;
    while(test--){
     int l,r;
     cin >> l >> r;
    
     cout << f(r)-f(l-1)  << newline;
    }
}