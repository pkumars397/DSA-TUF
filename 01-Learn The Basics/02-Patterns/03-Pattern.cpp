// *****
// ****
// ***
// **
// *

#include <bits/stdc++.h>
using namespace std;

void print(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
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