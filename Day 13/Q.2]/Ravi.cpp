#include<iostream>
using namespace std;
int main(){
    int t,n,m,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y>>a>>b;
        int tc = (n-x) + (m-y);
        int tp = max(n-a,m-b);
        if(tp<tc)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
