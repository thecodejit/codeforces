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


int main(){
    speed;
    int test;
    cin >> test;
    while(test--){
     int n;
     string s;
     cin >> n >> s;
     if(n==2 && s[0]>=s[1]){cout << "NO" << newline;}
     else{
         cout << "YES" << newline << "2" << newline << s[0] << space;
         for(int i=1;i<s.length(); i++){
             cout << s[i];
         }
         cout << newline;
     }
    }
}