#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        int a, b, count = 0;
        cin >> a >> b;
        string s = to_string((a + b));
        for (int i = 0; i < s.size(); i++)
        {
            int k = s[i] - 48;
            count += num[k];
        }
        cout << count << endl;
    }

    return 0;
}
