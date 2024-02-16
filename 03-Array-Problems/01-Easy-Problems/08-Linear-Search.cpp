#include<bits/stdc++.h>
using namespace std;
bool linearS(int arr[],int target){
    for(int i=0;i<5;i++){
        if(arr[i]==target) return true;
    }
    return false;
}
int main(){
    int arr[5]={32,3,33,2,3};
    cout<<linearS(arr,2);
    return 0;
}