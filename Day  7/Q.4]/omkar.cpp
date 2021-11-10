//Maximum Increase
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    int count = 1, maxno = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] > arr[i - 1])
        {
            count++;
        }
        else{
            count=1;
        }
        maxno = max(maxno, count);
    }
    cout << maxno << endl;

    return 0;
}
