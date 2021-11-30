#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int t;
  cin >> t;
  while (t--)
  {
    long long int c;
    cin >> c;
    long long int x = log2(c);
    long long int b = pow(2, x) - 1;
    long long int a = (c^b);
    long long int ans = a*b;
    
    cout << ans << "\n";
  }
  return 0;
}
