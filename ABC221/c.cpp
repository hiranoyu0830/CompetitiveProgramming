#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> a;
    while (n){
         a.push_back(n%10);
         n /= 10;
    }
    sort(a.begin(), a.end());
    int k = a.size();
    int ans = 0;
    do {
      for (int i = 1; i <= k-1; ++i) {
          //数字を二つに区切って掛け合わせる
          if (a[0] == 0) continue;
          if (a[i] == 0) continue;
          //右側の先頭(i番目)が0のとき
          int l = 0, r = 0;
          rep(j,i) l = l*10+a[j];
          for (int j = i; j < k; ++j) r = r*10+a[j];
          ans = max(ans, l*r);
      }
    }while (next_permutation(a.begin(), a.end()));
    //小さい順に全通り並べ替えて試す
    cout << ans << endl;
    return 0;
}