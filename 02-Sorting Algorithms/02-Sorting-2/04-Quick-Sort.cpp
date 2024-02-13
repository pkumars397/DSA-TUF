#include <bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int low,int high){
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i]<=arr[low] && i<=high-1){
        i++;
    }
    while(arr[j]>=arr[low] && j>=low+1){
        j--;
    }
    if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[j],arr[low]);
  return j;
}

void quickSort(int arr[],int low,int high){
  if(low<high){
    int pivot=findPivot(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
  }
//   return;
}
int main(){
    int a[5]={23,2,4445,223,1};
    quickSort(a,0,4);
    for(int i=0;i<=4;i++) cout<<a[i]<<endl;
    return 0;
}

// Time Complexity: O(nlogn) (best and avg) and worst(O(n2)). 
// Space Complexity: O(1) + O(n) auxiliary space for input.