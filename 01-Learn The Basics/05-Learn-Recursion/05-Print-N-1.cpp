#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if (i<1) return;
    cout<<i<<endl;
    print(i-1,n);
}

void print1(int i,int n){
  if(n>i) return;
  print1(i,n+1);
  cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print1(n,1);
    return 0;
}

//recusive tree for backtracking=>f(3,1)(1)=>f(3,2)(2)=>f(3,3)(3)=>f(3,4)(return)