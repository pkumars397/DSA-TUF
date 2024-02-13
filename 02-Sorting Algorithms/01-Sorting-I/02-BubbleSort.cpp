#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
            if(didswap==0) break;
        }
    }
}
int main(){
    int s;
    cout<<"enter the size of array:";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    bubble(arr,s);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// TC : O(n2) (worst and avg case) 
// TC: O(n) (best case ,if array is already sorted)