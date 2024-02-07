#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop(); //remove from start of the queue,FIFO actions
    cout<<q.front();
    return 0;
}