//Author :: Soumyajit Dey (TheCodejit)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define magic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
int main()
{
    magic;
    int t;
    
    string table,col;
    cin >> table;
    string a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    col = a + b + c +d +e;
    for (int i = 0; i < col.size(); ++i)
        if (table[0] == col[i] || table[1] == col[i])
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
}