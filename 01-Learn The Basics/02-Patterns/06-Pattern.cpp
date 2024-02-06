// *
// * *
// * * *
// * * * *    n=4
// * * *
// * *
// *

#include <bits/stdc++.h>
using namespace std;

void print(int n){
   for(int i=0;i<2*n-1;i++){
    if(i<n){
      for(int j=0;j<=i;j++){
        cout<<"* ";
      }
      cout<<endl;
    }
    else{
      for(int j=0;j<2*n-i-1;j++){
        cout<<"* ";
      }
      cout<<endl;
    }
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