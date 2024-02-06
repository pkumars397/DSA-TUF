// A
// A B
// A B C
// A B C D
// A B C D E

#include <bits/stdc++.h>
using namespace std;

void print(int n){
  for(int i=0;i<n;i++){
    for(char c='A';c<='A'+i;c++){
        cout<<c<<" ";
    }
    cout<<endl;
  }
}

int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}