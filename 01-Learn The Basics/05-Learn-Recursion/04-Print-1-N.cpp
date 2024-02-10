#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if (i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

// using backtracking
void print1(int i,int n){
    if (i<1) return;
    print1(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print1(n,n);
    return 0;
}

// recursive tree f(3,3)(3)=>f(2,3)(2)=>f(1,3)(1)=>f(0,3)(return)