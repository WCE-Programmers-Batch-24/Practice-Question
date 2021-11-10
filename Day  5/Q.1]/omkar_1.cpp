#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n;
        a = 1;
        while (a <= n)
        {
            a *= 2;
        }
        a = a / 2 - 1;
        b = a ^ n;
        // cout << a << " " << b << endl;
        cout << a * b << endl;
    }

    return 0;
}
