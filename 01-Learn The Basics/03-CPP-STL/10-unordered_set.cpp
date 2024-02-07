#include <bits/stdc++.h>
using namespace std;
int main(){
    // not sorted and unique
    unordered_set<int> us;
    us.insert(2);
    us.insert(1);
    us.insert(10);//{10,1,2} all insertions in reverse order 
    for(auto it=us.begin();it!=us.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}