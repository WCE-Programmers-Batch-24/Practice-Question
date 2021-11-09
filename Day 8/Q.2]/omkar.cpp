#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, r, m;
        cin >> x >> r >> m;
        r *= 60;
        m *= 60;
        if (2 * r <= x + m && m > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
