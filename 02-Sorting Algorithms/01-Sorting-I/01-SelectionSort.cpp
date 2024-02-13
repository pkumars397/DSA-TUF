#include <bits/stdc++.h>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i) swap(arr[i],arr[min]);
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
    selection(arr,s);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// Algo: look for minimum in unsorted portion.
// TC: O(n^2) (best/avg/worst) outer loop O(n) and inner loop O(n^2) ,so total O(n2)