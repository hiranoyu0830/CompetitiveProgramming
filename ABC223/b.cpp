#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int m = s.size();
    vector<string> v(m,s);
    
    vector<char> c(m);
    rep(i,m) {
        c[i] = s.at(i);  
        rotate(v[i].begin(),v[i].begin()+i,v[i].end());
    }
    sort(v.begin(),v.end());
    cout << v[0] << endl;
    cout << v[m-1] << endl;

    return 0;
}