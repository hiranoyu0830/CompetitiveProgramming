//
// Created by Hirano on 11/20/2021.
//
//解けず
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<vector<int>> a(n, vector<int>(2,0));
    rep(i,n) cin >> a[i][0];
    int ans = 1;


        a[x-1][1] += 1;
        int i = a[i-1][0];
        while(i < 1) {
            if (a[i - 1][1] != 0) cout << ans;
            else {
                a[i - 1][1] += 1;
                i = a[i - 1][0];
                ans += 1;
            }
        }



    cout << ans <<endl;
    return 0;
}