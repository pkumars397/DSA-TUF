#include <bits/stdc++.h>
using namespace std;
int main(){
    // similar to vector,only extra fast ,push_front.
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.push_front(1);
    l.emplace_front(1);
    for(list<int>::iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}