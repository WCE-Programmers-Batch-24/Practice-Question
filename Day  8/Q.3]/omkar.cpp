#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num, num + n);
        for (int i = 0; i < n; i++)
        {
            ans += num[i] % k;
        }
        cout << ans % k << '\n';
    }
    return 0;
}
