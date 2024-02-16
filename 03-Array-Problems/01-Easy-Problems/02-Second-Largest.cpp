#include<bits/stdc++.h>
using namespace std;
// 1.brute force;
int slargest(vector<int> &v){
    int n=v.size();
    sort(v.begin(),v.end());
    int largest=v[v.size()-1];
    int slargest;
    for(int i=n-2;i>=0;i--){
        if(v[i]!=largest){
          slargest=v[i];
          break;
        }
    }
    cout<<slargest;
    return slargest;
}

// 2.Better approach
int slargest2(vector<int> &v){
  int n=v.size();
    int largest=v[0];
    int slargest=INT_MIN;
    for(auto it:v){
        if(it>largest) largest=it;
    }

    for(int i=0;i<n;i++){
        if(v[i]!=largest && v[i]>slargest){
          slargest=v[i];
        }
    }
    cout<<slargest;
    return slargest;
}

// 3.Optimal Solution
int slargest3(vector<int> &v){
    int n=v.size();
    int largest=v[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
       if(v[i]>largest){
        slargest=largest;
        largest=v[i];
       }
       else{
        if(v[i]>slargest && v[i]<largest) slargest=v[i];
       }
    }
    cout<<slargest;
    return slargest;
}


int main(){
    vector<int> v={1,2,4,7,7,5};
    slargest3(v);
    return 0;
}