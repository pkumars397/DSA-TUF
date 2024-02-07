#include <bits/stdc++.h>
using namespace std;
// don't divide by zero ,will cause error.
bool primes(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)%i!=i){
                count++;
            }
        }
    }
    if(count==2) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<primes(n);
    }
    return 0;
}