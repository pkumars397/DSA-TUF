#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int>& v,int s){
    for(int i=1;i<s;i++){
        if(v[i-1]<=v[i]) continue;
        return false;
    }
    return true;
}
int main(){
    vector<int> a={23,2,3,4};
    cout<<sorted(a,4);
    return 0;
}