#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, diffs;
    cin >> x;
    if(x<40)
    {
        diffs = 40 - x;
        cout << diffs << endl;
    }
    else if(x>89) cout << "expert" << endl;
    else if(x<70 && x > 39)
    {
        diffs = 70 - x;
        cout << diffs << endl;
    }
    else 
    {
        diffs = 90 - x;
        cout << diffs << endl;
    }
    return 0;
}