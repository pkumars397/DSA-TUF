// 1    1 [1 4 1]
// 12  21 [2 2 2]
// 123321 [3 0 3]

#include <bits/stdc++.h>
using namespace std;

void print(int n){
  for(int i=1;i<=n;i++){
    int start=i;
    for(int j=1;j<=start;j++){
        cout<<j;
    }

    for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
    }
    for(int j=start;j>=1;j--){
        cout<<j;
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