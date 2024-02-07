#include <bits/stdc++.h>
using namespace std;
int main(){
    // Ordered map based on key
    map<int,int> m;
    map<int,pair<int,int>> m2;
    map<pair<int,int>,int> m3;

    m[1]=10;
    m.insert({2,3});
    m3[{3,4}]=10;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    cout<<m[1]<<endl;
    return 0;
}

// unordered_map O(1) and multimap O(1)