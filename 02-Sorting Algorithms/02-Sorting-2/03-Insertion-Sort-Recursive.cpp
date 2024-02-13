#include <bits/stdc++.h>
using namespace std;
void insertSort(int arr[],int i,int s){
    if(i==s) return;
     while(i>0 && arr[i-1]>arr[i]){
        swap(arr[i-1],arr[i]);
        i--;
     }
     insertSort(arr,i+1,s);
}

int main(){
    int arr[5]={29,2,23,21,0};
    insertSort(arr,0,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;
    return 0;
}