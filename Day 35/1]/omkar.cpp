#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int x = xorsum;
    int getbit = 0, count = 0;
    while (getbit != 1)
    {
        getbit = xorsum & 1;
        xorsum = xorsum >> 1; // shifts the bits to the right ny 1 postion so no need to do xorsum  /= 10;
        count++;
    }

    int something = 1 << (count - 1);
    int num1 = 0;
    for (int i = 0; i < n; i++)
    {

        if ((arr[i] & something) == 0)
        {
            num1 = num1 ^ arr[i];
        }
    }
    int num2 = num1 ^ x;
    cout << num1 << " " << num2;

    return 0;
}
