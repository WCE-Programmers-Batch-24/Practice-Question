#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, a, y, b;
        cin >> n >> m;
        cin >> x >> a;
        cin >> y >> b;
        int chor_steps = (m - a) + (n - x);
        n -= y;
        m -= b;
        int sipahi_steps = max(n, m);
        if (chor_steps <= sipahi_steps)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
