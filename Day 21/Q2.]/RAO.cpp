#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> move_dupes_to_end(vector<int> input){
    set<int> counter;
    vector<int> result;
    vector<int> repeats;

    for (vector<int>::iterator i = input.begin(); i < input.end(); i++){
        // if element is unique then store it in "result" vector 
        if (counter.find(*i) == counter.end()) result.push_back(*i);
        // if element is repeated then store it in "repeats" vector
        else repeats.push_back(*i);
      
        counter.insert(*i);
    }
    
    // add the repeated elements stored in "repeats" vector at the end of the "result" vector
    result.insert(result.end(), repeats.begin(), repeats.end());

    return result;
}

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> V, Ans;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            V.push_back(x);
        }
        
        // sorting the given array
        sort(V.begin(), V.end());
        
        // calling the function to push duplicates at the end of the array
        Ans = move_dupes_to_end(V);
        
        for(int i=0; i<n; i++) cout<<Ans[i]<<" ";
        cout<<"\n";
    }
    
    return 0;
}
