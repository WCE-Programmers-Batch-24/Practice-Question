#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll decimalToBinary(ll N)
{
 
    // To store the binary number
    ll B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ll c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}

ll reverseDigits(ll num)
{
    
    ll rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
/* Function to check if n is Palindrome*/
int isPalindrome(int num)
{
    ll n = decimalToBinary(num);
    // get the reverse of n
    ll rev_n = reverseDigits(n);
 
    // Check if rev_n and n are same or not.
    if (rev_n == n)
        return 1;
    else
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        while(n>0)
        {
            for(int i=n;i>0;i--)
            {
                // if(v[i]==1)
                if(isPalindrome(i))
                {
                    v.push_back(i);
                    n = n-i;
                    break;
                }
            }
        }
        cout<<v.size()<<endl;
        for(auto i : v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
