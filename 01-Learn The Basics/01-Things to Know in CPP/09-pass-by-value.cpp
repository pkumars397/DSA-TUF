#include <bits/stdc++.h>
using namespace std;
int twice(int a){
   a=2*a;
   return a;
}

int main(){
    int num;
    cin>>num;
    int res=twice(num); //this function call will not modify the passed argument.(pass by value,only value is passed)
    cout<<res<<endl<<num;
    return 0;
}