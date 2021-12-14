#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    if(n > 41){
        n += 1;
        printf("AGC0%d\n", n);
    }
    else if(n>9){
        printf("AGC0%d\n", n);
    }
    else{
        printf("AGC00%d\n", n);
    }

    return 0;
}