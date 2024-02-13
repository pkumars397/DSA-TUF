#include <bits/stdc++.h>
using namespace std;
void insertSort(int arr[],int s){
    for(int i=0;i<s;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int arr[5]={2,23,21,44,10};
    insertSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}


// TC:(avg ,worst) O(n^2); best case:O(n)