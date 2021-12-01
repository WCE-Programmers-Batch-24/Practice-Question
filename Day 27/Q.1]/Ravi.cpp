#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int i;
        for( i = 0 ; i < n ;i++) cin>>arr[i];
        int c = 0;
        for(i = 0 ; i < n-1 ;i++){
            c = 0;
            cout<<arr[i];
            while(arr[i+1]-arr[i]==1 && i<n){i++;c++;}
            if(c>1){
                if(i==n-1)cout<<"..."<<arr[i];
                else cout<<"..."<<arr[i]<<",";
            }
            if(c==1){
                if(i==n-1)cout<<","<<arr[i];
                else cout<<","<<arr[i]<<",";
            }
            if(c==0){
                if(i!=n-1) cout<<",";
            }
        }
        if(i==n-1) cout<<arr[i];
        cout<<endl;
    }
}
