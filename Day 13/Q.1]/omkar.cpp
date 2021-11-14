#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        if ((((n % 2 == 0) && (k % 2 == 0)) || ((n % 2 != 0) && (k % 2 != 0))) && (pow(n, 0.5) >= k))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
