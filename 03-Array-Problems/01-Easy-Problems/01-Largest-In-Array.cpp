#include<bits/stdc++.h>
using namespace std;
// int arr[10];// will create array with 0 values.(maxsize 10^7)
// array stores the elements at continuous location .but address is not known.if address is known then for getting next element ,just address+1 ,keep doing u will get next elements.that is why we access via index.

// 1.Brute Force
int largeste(int arr[],int s){
  sort(arr,arr+s);
  cout<<arr[s-1];
  return arr[s-1];
}

int largeste1(int arr[],int s){
  int largeste=arr[0];
  for(int i=1;i<s;i++){
    if(arr[i]>largeste) largeste=arr[i];
  }
  cout<<largeste;
  return largeste;
}



int main(){
    int arr[5]={3343,23,40,4,2}; //will create array with garbage values (maxsize 10^6)
    largeste1(arr,5);
    return 0;
}