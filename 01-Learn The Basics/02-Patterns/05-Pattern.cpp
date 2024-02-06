// * * * * [0 4 0]
//  * * *  [1 3 1]
//   * *   [2 2 2]
//    *    [3 1 3]

#include <bits/stdc++.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    // spaces
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    // stars
    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }
    // spaces
    for(int j=0;j<i;j++){
        cout<<" ";
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