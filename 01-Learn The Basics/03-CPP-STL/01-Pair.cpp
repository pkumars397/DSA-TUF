#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,char> p0;
    p0.first=5,p0.second='A';
    cout<<p0.first<<" "<<p0.second<<endl;

    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,pair<int,int>> p2={1,{2,4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int> arr[]={{1,2},{2,3},{4,5}};
    cout<<arr[0].first<<endl;

    return 0;
}