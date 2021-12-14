#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    double x, y;
    cin >> x;
    int a;
    a = x;
    y = (x - a) * 10;

    if(y<3)
        cout<<a<<"-";
    else if(y<7)
        cout<<a;
    else
        cout<<a<<"+";


    return 0;
}