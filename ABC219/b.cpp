#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main()
{
    vector<string> s(3);
    rep(i,3) cin >> s[i];
    string t;
    cin >> t;
    string ans;
    for (char c : t) ans += s[c-'1'];
    cout << ans << endl;
    return 0;

}