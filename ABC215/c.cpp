#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    sort(s.begin(), s.end());
    rep(i,k-1) next_permutation(s.begin(), s.end());
    cout << s << endl;

    return 0;
}