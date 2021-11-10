// magical doors
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count;
        char current;
        if (s[0] == '0')
        {
            count = 1;
            current = '0';
        }
        else if (s[0] == '1')
        {
            count = 0;
            current = '1';
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == current)
            {
                continue;
            }
            else
            {
                current = s[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
