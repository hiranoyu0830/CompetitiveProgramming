#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int x, CoinsToNextGift;
    cin >> x;

    if(x % 100 != 0) CoinsToNextGift = 100 - x % 100;
    else CoinsToNextGift = 100;
    
    cout << CoinsToNextGift << endl;

    return 0;
}