#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;
        
        vector<int> a(n + 1);
        vector<int> b,r;
        
        for (int i = 1;i<=n;i++)
            cin>>a[i];
        
        for (int i = 1;i<=n;i++){
            char x;
            cin>>x;

            if (x == 'B')b.push_back(a[i]);
            else r.push_back(a[i]);
        }
        
        int cur = 1;
        
        sort(b.begin(),b.end());
        sort(r.begin(),r.end());
        
        bool is = true;
        
        for (int i:b){
            if (i >= cur)
                cur++;
            else{
                is = false;
                break;
            }
        }

        for (int i:r){
            if (i <= cur)
                cur++;
            else{
                is = false;
                break;
            }
        }
        
        cout<<(is ? "YES": "NO")<<endl;
    }
    return 0;
}
