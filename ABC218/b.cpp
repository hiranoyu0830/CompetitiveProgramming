#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main()
{
    int n = 26;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    string ans;
    rep(i,n) ans += 'a'+(p[i]-1);
    cout << ans << endl;
    return 0;
}