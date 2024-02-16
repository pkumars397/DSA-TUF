#include <bits/stdc++.h>
using namespace std;

// brute force using set
int removeDuplicates(vector<int>& v){
    set<int> s;
    for(auto it:v) s.insert(it);
    int i=0;
    for(auto it:s) v[i++]=it;
    return s.size();
}

// Optimized one
int removeDuplicates2(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
}

int main(){
    vector<int> a={232,232,3343,23,94};
    cout<<removeDuplicates(a);
    return 0;
}