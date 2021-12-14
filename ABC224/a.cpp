#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int a = s.size();
    if(s[a-1] == 'r') cout << "er";
    else cout << "ist";

    return 0;
}