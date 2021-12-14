#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> a(n+2);
    rep(i,n){
        cin >> a[i];
    }
    vector<int> ans(n);
    char c = 'g';
    for (int i = 0; i < (n); ++i){
        if(a[i] > a[i+1] && c == 'g' && a[i+2] != 0){
        char c = 's';
        ans[i] = 1;
        }
        else if(a[i] <= a[i+1] && c == 's'){
            char c = 'g';
            ans[i] = 1;
            
        }
        
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;
}