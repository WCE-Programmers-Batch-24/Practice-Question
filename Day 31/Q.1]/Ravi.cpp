#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x1,x2;
        ll p1,p2;
        cin>>x1>>p1>>x2>>p2;
        // if(x1*pow(10,p1)>x2*pow(10,p2)) cout<<">"<<endl;
        // else if(x1*pow(10,p1)<x2*pow(10,p2)) cout<<"<"<<endl;
        // else cout<<"="<<endl;
        double temp1 = x1;
        while(x1/10>0)
        {
            temp1 /= 10.0;
            p1 += 1;
            x1 /= 10;
        }
        double temp2 = x2;
        while(x2/10>0)
        {
            temp2 /= 10.0;
            p2 += 1;
            x2 /= 10;
        }
        if(p1>p2) cout<<">"<<endl;
        else if(p1<p2) cout<<"<"<<endl;
        else
        {
            if(temp1>temp2) cout<<">"<<endl;
            else if(temp1<temp2) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
    }
    return 0;
}
