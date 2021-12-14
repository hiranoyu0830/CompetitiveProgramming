#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main()
{
    int N,P;
    cin >> N >> P;
    vector<int> a(N);
    rep(i,N) cin >> a[i];
    int ans = 0;
    rep(i,N) 
    {
        if(a[i] < P) ++ans;
    } 
    cout << ans << endl;
    return 0;
}