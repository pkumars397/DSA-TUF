#include <bits/stdc++.h>
using namespace std;
// 1.Brute Force
void rotate(vector<int> &v,int k){
    int n=v.size();
    vector<int>temp;
    for(int i=0;i<k;i++){
        temp.push_back(v[i]);
    }

    for(int i=k;i<n;i++){
        v[i-k]=v[i];
    }
    
    for(int i=n-k;i<n;i++){
        v[i]=temp[i-(n-k)];
    }
}

// 2.Optimal 
void rotate1(vector<int> &v,int k){
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());
}

int main(){
    vector<int>v;
    v={1,2,3,4,5};
    rotate1(v,2);
    for(auto it:v) cout<<it<<endl;
    return 0;
}