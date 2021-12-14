#include <bits/stdc++.h>
using namespace std;

int main()
{
    //模範解答
    //int n;
    //cin >> n;
    //printf("%04d\n", n); 0.paddingという
    //return 0;
    
    int N;
    cin >> N;
    string str;
    if(N < 10) 
    {
        str = to_string(N);
        str.insert(0,"000");
        cout << str << endl;

    }
    else if(N < 100)
    {
        str = to_string(N);
        str.insert(0,"00");
        cout << str << endl;
    }
    else if(N < 1000) 
    {
        str = to_string(N);
        str.insert(0,"0");
        cout << str << endl;
    }
    else cout << N << endl;

    return 0;
}