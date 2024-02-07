#include <bits/stdc++.h>
using namespace std;
// brute force O(n)
void printdiv(int n){
   for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;
    }
   }
}

// optimized way O(sqrt(n));
// 36  till sqrt(n) we can get all factors.
// 1 * 36
// 2 * 18
// 3 * 12
// 4 * 9
// 6 * 6
void printdiv2(int n){
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
       if(n%i==0){
        ans.push_back(i);
        if((n/i)!=i){
            ans.push_back(n/i);
        }
       }
    }
    // O(nlogn)
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printdiv2(n);
    }
    return 0;
}