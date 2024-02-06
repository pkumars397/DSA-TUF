//     *     [4 1 4]
//    * *    [3 2 3]
//   * * *   [2 3 2]
//  * * * *  [1 4 1]
// * * * * * [0 5 0]

#include <bits/stdc++.h>
using namespace std;

void print(int n){
   for(int i=0;i<n;i++){
    // spaces
    for(int j=0;j<n-i+1;j++){
        cout<<" ";
    }
    // stars
    for(int j=0;j<=i;j++){
       cout<<"* ";
    }
    // spaces again
    for(int j=0;j<=n-i+1;j++){
       cout<<" ";
    }
    cout<<endl;
   }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}