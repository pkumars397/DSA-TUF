#include <bits/stdc++.h>
using namespace std;

int twice(int &a){
    a=a*2;
    return a;
}

void updateArr(int arr[]){ // array will always go by pass by reference
    arr[0]+=10;
}


int main(){
    int num;
    cin>>num;
    int res=twice(num); // this will modify the num(coz reference of the num is passed)
    cout<<res<<endl<<num;
    return 0;
}