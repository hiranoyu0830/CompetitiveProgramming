#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >>n;
    long long ans = 0;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);
    rep(i,n) cin >> c.at(i);
    vector<int> cnt(n+1);
    rep(i,n) cnt.at(a.at(i))++;
    rep(j,n) ans += cnt.at(b.at(c.at(j)-1));
    cout << ans << endl;
    return 0;
}