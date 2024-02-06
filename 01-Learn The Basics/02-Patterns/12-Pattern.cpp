// E
// D E
// C D E
// B C D E

#include <bits/stdc++.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    for(char c='E'-i;c<='E';c++){
        cout<<c;
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