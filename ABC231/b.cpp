#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<vector<string>> a(n, vector<int>(n));
    rep(i,n) cin >> a[i][0];

    if(n > 1){
    rep(i,n)for(int j = i; j < n; ++j){
        if(a[i][0] == a[j+1][0]) a[i][1]++;
    }
    sort(count);
    cout << a[];
    }
    else {
        cout << a[0];
    }


    return 0;
}