#include<bits/stdc++.h>
using namespace std;

// functional way ,most used.

int fact(int n){
    if (n==1) return 1;
    return n*fact(n-1);
}
int main(){
    cout<<fact(3);
    return 0;
}

// recursive tree for the functional one
// first call=>sum(3) return 3*fact(2);=>3*2=>6 ans.
// second call=>sum(2) return 2+fact(1);=>2*1
// third call=>sum(1) return 1 =>base condition met