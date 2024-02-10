#include<bits/stdc++.h>
using namespace std;

// paramatrised way.(printing)
void s(int i,int sum){
    if (i==0) {
        cout<< sum;
        return ;
    }
    s(i-1,sum+i);
}

// functional way ,most used.

int sum(int n){
    if (n==0) return 0;
    return n+sum(n-1);
}
int main(){
    cout<<sum(10);
    return 0;
}

// recursive tree for the functional one
// first call=>sum(3) return 3+sum(2);=>3+3=>6 ans.
// second call=>sum(2) return 2+sum(1);=>2+1
// third call=>sum(1) return 1+sum(0);=>1+0
// fourth call=>sum(0) return 0(base condition met)