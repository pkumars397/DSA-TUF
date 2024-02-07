#include <bits/stdc++.h>
using namespace std;
int main(){
    // again similar only its extra is push_front,d.front()
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<d.front()<<" "<<d.back();
    return 0;
}