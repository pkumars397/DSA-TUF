#include <bits/stdc++.h>
using namespace std;
int main(){
    // ordered set,and logn for all operations.
    set<int> s;
    s.insert(8);
    s.insert(4);
    s.emplace(1);
    s.emplace(10);
    // all vector methods works ,like begin,end,size,swap etc.
    // in vector also insert can be used but it increases the TC.
    auto it=s.begin();
    cout<<*it<<endl;
    
    // find
    // returns the address of 1 if exist else address of v.end()+1;
    s.erase(8);//takes logn
    s.erase(s.find(1));//takes O(1)

    auto it3=s.find(4);
    auto it4=s.find(10);
    s.erase(it3,it4);//{10} last address not considered.
    
    // count ,returns 1 or else 0.
    cout<<s.count(10);
    return 0;
}