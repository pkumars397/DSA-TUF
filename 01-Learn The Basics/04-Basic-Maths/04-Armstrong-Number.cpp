#include <bits/stdc++.h>
using namespace std;
string arm(int n){
    int sum=0;
    int temp=n;
    while(temp){
        int digit=temp%10;
        sum=sum+pow(digit,3);
        temp=temp/10;
    }
    if(n==sum) return "Yes";
    return "No";
}
int main(){
    int n=153;
    cout<<arm(n);
    return 0;
}