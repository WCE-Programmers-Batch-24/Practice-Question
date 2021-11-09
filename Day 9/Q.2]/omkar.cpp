#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int t;
    cin>>t;
    while(t--){
         int m,x;
        cin>>m>>x;
        if(x>m){
        cout<<2*m - x<<endl;
            }
            else{
cout<<x<<endl;
            }
    }
    return 0;
}
