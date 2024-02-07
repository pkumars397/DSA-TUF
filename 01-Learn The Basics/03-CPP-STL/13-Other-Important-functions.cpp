#include <bits/stdc++.h>
using namespace std;
int main(){

    int a=192982;
    int noOfSetBits=__builtin_popcount(a);
    cout<<noOfSetBits<<endl;
    
    // if long long ,then add ll 
    long long b=189239289923;
    cout<<__builtin_popcountll(b)<<endl;

    // next permutation
    string s="123";
    do{
       cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));
    
    string s2="312";
    sort(s2.begin(),s2.end());
    do{
       cout<<s2<<endl;

    }while(next_permutation(s2.begin(),s2.end()));

    // finally maximum element in vector
    int arr[]={112,22,3,2};
    int maxi=*max_element(arr,arr+6);
    cout<<maxi;

    return 0;
}