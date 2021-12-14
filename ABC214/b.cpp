#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<string> s(n),t(n);
    rep(i,n){
        cin >> s[i] >> t[i];
    }
    rep(i,n) for (int j = i; j < n+1; ++j) {
        if(s[i] == s[j]){
            if(t[i] == t[j]){
                cout << "Yes";
                break;
            }
        }
    }
    cout << "No";
    return 0;
}