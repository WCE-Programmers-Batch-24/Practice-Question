#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll A, B, N;
        cin >> A >> B >> N;
        if (N % 2 != 0)
        {
            cout << max(A*2, B) / min(A*2, B) << endl;
        }
        else{
            cout << max(A, B) / min(A, B) << endl;
        }
    }

    return 0;
}
