#include <bits/stdc++.h>
using namespace std;

void revers(int arr[],int left,int right){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    revers(arr,left+1,right-1);
}

void revers2(int arr[],int i,int s){
    if(i>=s/2) return;
    swap(arr[i],arr[s-i-1]);
    revers2(arr,i+1,s);
}

int main(){
    int s;
    cout<<"enter size: ";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }

    revers2(a,0,s);
    for(int i=0;i<s;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}