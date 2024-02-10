#include<bits/stdc++.h>
using namespace std;
 int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
    }
int main(){
    int n=3;
    cout<<fib(n);
    return 0;
}

// here function call will be in sequencencial manner.whichever function call come first it will get resolved and then its next pending funtion call be resolved.

// recursive tree =>
  
//                 fib(4)
//         fib(3)          fib(2)
//     fib(2)   fib(1)   fib(1)  fib(0)
// fib(1) fib(0)

// first it will call the left subtree functions then go to left subtree.