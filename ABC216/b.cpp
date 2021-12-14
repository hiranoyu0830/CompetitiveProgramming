#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    set<string> st;
    rep(i,n) {
        string s, t;
        cin >> s >> t;
        string name = s + "" + t;
        st.insert(name);
    }
    if(st.size() == n) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}