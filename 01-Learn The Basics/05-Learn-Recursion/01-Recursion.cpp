#include <bits/stdc++.h>
using namespace std;

// function calling itself until a specified condition(exist condition) ,base case
// all the function calls pending will go to stack memory.here no exist condition ,so it will cause the stack overflow

void print(){
    cout<<1<<endl;
    print();//it will again call the function.
}
int main(){
    print();//this will call the print function
    return 0;
}