#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    string s, t;
    cin >> s >> t;
    bool ok = false;
    if (s == t) ok = true;
    int n = s.size();
    rep(i,n-1){
        string ns = s;
        swap(ns[i], ns[i+1]); 
        if (ns == t) ok = true;
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}