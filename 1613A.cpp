//Author :: TheCodejit
#include <bits/stdc++.h>
 
#define ll long long int
#define nline '\n'
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
    int p1,p2,x1,x2,x,y;
    cin >> x1 >> p1 >> x2 >> p2;
    x = to_string(x1).size()+p1;
    y = to_string(x2).size()+p2;
    if(x > y){
        cout << ">" << nline;
    }
    else if(x < y){
        cout << "<" << nline;
    }
    else{
        while(to_string(x1).size()<to_string(x2).size()){
           x1 *=10;
        }
         while(to_string(x2).size()<to_string(x1).size()){
            x2 *=10;
        }
        if(x1<x2){
            cout << "<" << nline;
        }
        else if(x1>x2){
            cout << ">" << nline;
        }
        else{
            cout << "=" <<nline;
        }
    }
    }
}