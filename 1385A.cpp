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
    cin >> t;
    while (t--)
    {
        int ar[3];
        cin >> ar[0] >> ar[1] >> ar[2];
        sort(ar, ar + 3);
        if(ar[1]!=ar[2]){cout << "NO" << '\n';}
        else{cout << "YES" << '\n' << ar[0] << ' ' << ar[0] << ' ' << ar[2] <<'\n';}
    }
}