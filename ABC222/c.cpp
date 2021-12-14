#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

bool win(char a, char b) {
    if (a == 'G' && b == 'C') return true;
    if (a == 'C' && b == 'P') return true;
    if (a == 'P' && b == 'G') return true;
    return false;
}


int main()
{
    int n, m;
    cin >> n >> m;
    int n2 =n*2;
    vector<string> a(n2);
    rep(i,n2) cin >> a[i];
    vector<P> d(n2);
    rep(i,n2) d[i] = P(0,i);//first=勝ち数,second=番号
    rep(mi,m) {
        rep(ni,n) {
            int i = ni*2, j = ni*2+1;
            int ai = d[i].second, aj = d[j].second;
            if(win(a[ai][mi],a[aj][mi])) d[i].first--; 
            if(win(a[aj][mi],a[ai][mi])) d[j].first--;
        }
        sort(d.begin(),d.end());
    }
    rep(i,n2) cout << d[i].second+1 << endl;
    return 0;
}