#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isVowel(char ch){
    return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
}

int main(){
    ll t;
    cin>>t;
    
    while(t--){
        int n, c = 0;
        cin>>n;
        
        string s;
        cin>>s;
        
        for(int i=0; i<n; i++){
            if(isVowel(s[i+1]) && !isVowel(s[i]) ){
                c++;
            }
        }
        
        cout<<c<<endl;
    }
    
    return 0;
}
