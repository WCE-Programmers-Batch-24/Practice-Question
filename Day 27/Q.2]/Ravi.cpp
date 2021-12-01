#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; 
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;

        int sum = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') sum +=1;
        }

        if(sum%2==1) cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;
    }
    
    return 0;
}
