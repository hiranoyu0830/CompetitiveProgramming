#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    long long n;
    cin >> n;
    string ans;
    while(n != 0) {
        if(n % 2 == 1) {
            ans += 'A';
            n--;
        }else {
            ans += 'B';
            n /= 2;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}