#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n], b[1000001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int a = min(i + 1, n - i);
        if (b[arr[i]] == 0 || b[arr[i]] > a)
            b[arr[i]] = a;
    }

    int min = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] * 2 != k)
        {
            int j = k - arr[i];
            if (j >= 0 && b[j] != 0)
            {
                int ans = max(b[arr[i]], b[j]);
                if (min == -1 || min > ans)
                    min = ans;
            }
        }
    }
    cout << min << endl;
    return 0;
}
