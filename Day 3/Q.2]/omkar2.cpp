#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, k;
        cin >> n >> m >> x >> k;
        string s;
        cin >> s;
        int o = 0, e = 0;
        int e = count(s.begin(), s.end(), 'E');
        int o = s.size() - e;
        int odd = min(((m + 1) / 2) * x, o);
        int even = min((m / 2) * x, e);
        int sum = odd + even;
        if (sum >= n)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
