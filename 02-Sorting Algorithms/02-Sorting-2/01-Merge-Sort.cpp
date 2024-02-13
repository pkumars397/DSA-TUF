#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector <int> temp;
        int l=low;
        int r=mid+1;
    while(l<=mid && r<=high){
        if(arr[l]>=arr[r]){
          temp.emplace_back(arr[r]);
          r++; 
        }
        else{
            temp.emplace_back(arr[l]);
            l++;
        }
    }
    while(l<=mid){
        temp.emplace_back(arr[l++]);
    }
    while(r<=high){
        temp.emplace_back(arr[r++]);
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low,int high){
   if(low==high) return;
   int mid=(low+high)/2;
   mergeSort(arr,low,mid);
   mergeSort(arr,mid+1,high);
   merge(arr,low,mid,high);
}

int main(){
    vector<int> v={233,334,23,34};
    mergeSort(v,0,3);
    for(auto i:v) cout<<i<<endl;
    return 0;
}

// TC :O(nlogn) Space : O(n)