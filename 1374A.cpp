//Required Remainder

//Author :: Soumyajit Dey (TheCodejit)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define magic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std; 
 
int main() {
	magic;
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, n;
		cin >> x >> y >> n;
		n-=y; n/=x; n*=x; n+=y;
		cout << n << '\n';
	}
	return 0;
}