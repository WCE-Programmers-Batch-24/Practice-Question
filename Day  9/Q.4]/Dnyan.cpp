#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y, c=0;
	    cin>>n>>k>>x>>y;
	    for(int i=0; i<n; i++){
	        if(x==y){
	            //cout<<"yes"<<endl;
	            c=1;
	            break;
	        }
	        x = (x+k)%n;
	        //cout<<"no"<<endl;
	    }
	    if(c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
