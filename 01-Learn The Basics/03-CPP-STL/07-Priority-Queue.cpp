#include <bits/stdc++.h>
using namespace std;
int main(){
    // Max Heap
    priority_queue<int> pq;
    pq.push(10);//O(logn)
    pq.push(2);
    pq.push(3);
    pq.emplace(4); // {2,3,4,10} biggest element stays on top.
    cout<<pq.top()<<endl;//10 O(1)
    pq.pop();//{2,3,4}O(logn)
    cout<<pq.top()<<endl;
    // size,swap,empty all same as vector.
    
    // min heap,minimum elements stays on top
    priority_queue<int ,vector<int>,greater<int>> pq2;
    pq2.push(20);
    pq2.push(5);
    pq2.emplace(2);
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top();
    return 0;
}