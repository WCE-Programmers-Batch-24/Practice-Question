#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
    int t;
    cin>>t;

    while(t--){
        ll c, a, b, bits = 0, x;
        cin>>c;

        x = c;
        while(x>0){
            x /= 2;
            bits++;
        }

        a = pow(2, (bits-1)) - 1;

        b = a^c;

        cout<<a*b<<endl;
    }
    
    return 0;
}
