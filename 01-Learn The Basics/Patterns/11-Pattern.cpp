//     A      [4,1,4]
//    ABA     [3,3,3]
//   ABCBA    [2,5,2]
//  ABCDCBA   [1,7,1]
// ABCDEDCBA  [0,9,0]

#include <bits/stdc++.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    // spaces
     for(int j=0;j<n-i+1;j++){
        cout<<" ";
     }
    // Characters
     char c='A';
     int breakpoint=(2*i+1)/2;
     for(int j=0;j<2*i+1;j++){
        cout<<c;
        if(j<breakpoint) c++;
        else c--;
     }
    // spaces again
     for(int j=0;j<n-i+1;j++){
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