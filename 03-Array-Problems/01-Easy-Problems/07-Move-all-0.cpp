#include<bits/stdc++.h>
using namespace std;

// 1.Brute Force
void move(vector<int> &v){
    vector<int> t;
    for(int i=0;i<v.size();i++){
      if(v[i]!=0)
      t.push_back(v[i]);
    }
    for(int i=0;i<t.size();i++){
        v[i]=t[i];
    }
    for(int i=t.size();i<v.size();i++){
        v[i]=0;
    }
}

// 2.Optimal Solution
void move2(vector<int> &v){
    int j=-1;
    for(int i=0;i<v.size();i++){
      if(v[i]==0) {
        j=i;
        break;
      }
    }

    for(int i=j+1;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
}

int main(){
    vector<int> v={23,3,343,2,0,3,0,0,33};
    move2(v);
    for(auto it:v) cout<<it<<" ";
    return 0;
}