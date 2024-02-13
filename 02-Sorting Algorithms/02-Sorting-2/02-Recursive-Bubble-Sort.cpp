#include <bits/stdc++.h>
using namespace std;
void bubbleSortRecur(int arr[],int i){
    if(i==0) return;
    for(int j=0;j<i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSortRecur(arr,i-1);
}
int main(){
    int arr[5]={29,2,23,21,0};
    bubbleSortRecur(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;
    return 0;
}