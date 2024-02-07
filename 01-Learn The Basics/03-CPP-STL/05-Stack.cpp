#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.emplace(5);
    
    // Lifo(Last in first out),top,size,empty,pop
    cout<<s.top()<<endl;//5
    cout<<s.empty()<<endl;//false
    s.pop();//5 will pop out
    cout<<s.top()<<endl;
    
    stack<int> st2;
    s.swap(st2);
    cout<<s.size();//0 now
    return 0;
}