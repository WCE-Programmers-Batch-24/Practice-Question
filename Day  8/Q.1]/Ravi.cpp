#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x , y , sum , counter = 0;
        cin>>x>>y;
        sum=x+y;
        while(sum)
        {
            switch(sum%10)
            {
                case 0 :
                counter += 6;
                break;
                
                case 1 :
                counter += 2;
                break;
                
                case 2 :
                counter += 5;
                break;
                
                case 3 :
                counter += 5;
                break;
                
                case 4 :
                counter += 4;
                break;
                
                case 5 :
                counter += 5;
                break;
                
                case 6 :
                counter += 6;
                break;
                
                case 7 :
                counter += 3;
                break;
                
                case 8 :
                counter += 7;
                break;
                
                case 9 :
                counter += 6;
                break;
            }
            sum /= 10 ;
        }
        cout<<counter<<"\n";
    }
	return 0;
}
