#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mpp;
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
      cin>>arr[i];
      mpp[arr[i]]++;
    }

    for(auto i:mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
// it is sorted map ,no matter in which order u are storing it will always store thing in sorted order.  TC: O(logn)

// if we use unordered_map ,unsorted(any order) TC: O(1) (best/avg) O(n) (worst(rare))
    return 0;
}