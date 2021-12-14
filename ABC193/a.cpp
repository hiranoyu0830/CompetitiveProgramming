#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int a, b;
    cin >> a >> b;

    double DiscountRate = 0;

    DiscountRate = 100 - (double)b * 100 / a;

    printf("%.10f\n",DiscountRate);

    return 0;
}