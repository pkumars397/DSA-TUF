#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if (i>n) return;
    cout<<"Prashant"<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
}

// recursive tree for f(1,3)-> f(1,3)(print 1)->f(2,3)(print 2)->f(3,4)(print 3)->f(4,3)(returns base case meet)