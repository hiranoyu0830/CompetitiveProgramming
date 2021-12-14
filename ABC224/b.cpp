#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i,h){
        rep(j,w) cin >> a.at(i).at(j);
    }
    int ans = 0;
    rep(i,h){
        rep(j,w){
            for(int l = i + 1; l < h - i; ++l){
                for(int m = j + 1; m < w - j; ++m){
                    if(a[l][m] + a[i][j] > a[l][j] + a[i][m]) ++ans;
                }

            }
        }
    }
    if(ans == 0) cout << "Yes";
    else cout << "No";

    return 0;
}