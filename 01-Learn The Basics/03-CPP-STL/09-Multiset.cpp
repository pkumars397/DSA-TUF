#include <bits/stdc++.h>
using namespace std;
int main(){
    // sorted but not unique,stores all occurances
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout<<ms.count(1)<<endl;

    ms.erase(1);//erases everything in ms

    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.erase(ms.find(2));//only one 2 will be deleted
    
    
    for(auto i:ms){
        cout<<i;
    }

    return 0;
}