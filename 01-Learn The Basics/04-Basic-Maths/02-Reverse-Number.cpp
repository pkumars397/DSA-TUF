#include <bits/stdc++.h>
using namespace std;
 int reverse(int x) {
       int sign=1;
       if(x<0) sign=-1;
       x=abs(x);
       long long rev=0;
       while(x){
           rev=rev*10+x%10;
           x=x/10;
       } 
       return sign*rev<pow(-2,31)||rev>pow(2,31)-1?0: sign*rev;
    }

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<reverse(n)<<endl;
    }
    return 0;
}