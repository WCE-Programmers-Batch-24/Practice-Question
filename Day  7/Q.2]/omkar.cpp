#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=sqrt(n);i>0;i--){
	        if(n%i==0){
	            cout<<min(n/i,(n/i)-i)<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
