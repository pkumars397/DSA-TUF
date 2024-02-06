// *****
// *   *
// *   *
// *****

#include <bits/stdc++.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=n-1;j++){
        if(i==0||i==n-1||j==0||j==n-1){
            cout<<"* ";
        }
        else{
            cout<<" ";
        }
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