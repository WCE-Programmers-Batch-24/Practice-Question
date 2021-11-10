#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k, x, y, flag = 0;
        cin >> n >> k >> x >> y;
        int a = n;
        while (a--)
        {
            if ((x += k) % n == y)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
