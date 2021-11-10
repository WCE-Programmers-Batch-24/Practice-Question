#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b, sum=0, result=0;
	    cin>>a>>b;
	    sum = a+b;
	    string s = to_string(sum);
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='0' || s[i]=='6' || s[i]=='9')
	           result = result + 6;
	        else if(s[i]=='1')
	           result = result + 2;
	        else if(s[i]=='2' || s[i]=='3' || s[i]=='5')
	           result = result + 5;
	        else if(s[i]=='4')
	           result = result + 4;
	        else if(s[i]=='7')
	           result = result + 3;
	        else if(s[i]=='8')
	           result = result + 7;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
