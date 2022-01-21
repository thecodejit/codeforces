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

bool vowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}

int main(){
    speed;
        string s,t;
        cin >> s;
        cin >> t;
        int flag=1;
        if(s.length()!=t.length()){
            cout << "No";
            return 0;
        }
        for(int i=0; i<s.length();i++){
            if((vowel(s[i]) && vowel(t[i])) || (vowel(s[i])==false && vowel(t[i])==false))
                continue;
            
            flag = 0;
            break;
        }
        if(flag){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
