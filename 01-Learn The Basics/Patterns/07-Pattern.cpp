// 1
// 0 1
// 1 0 1
// 0 1 0
// 1 0 1 0

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        int start=1;
            if(i%2) start=0;
            else start=1;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
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