#include<bits/stdc++.h>
using namespace std;
void rotateleft(vector<int> &v){
    int temp=v[0];
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];
    }

    v[v.size()-1]=temp;
}

int main(){
    vector<int>v={1,2,3,4,5};
    rotateleft(v);
    for(auto it:v) cout<<it;
    return 0;
}