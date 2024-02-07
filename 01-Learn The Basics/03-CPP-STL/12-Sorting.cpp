#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
        if(a.second<b.second) return true;
        else if (a.second>b.second) return false;
        else{
            if(a.first>b.second) return true;
            return false;
        }
}

int main(){
    int arr[]={192,29,1932,1,2,3};
    sort(arr,arr+6);
    for(auto item:arr){
        cout<<item<<endl;
    }

    vector<int> v={829,292,29,292,2};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<endl;
    }

    // sort(a+1,a+2)   can also sort from any index.

    // Decreasing Sorting

    // bool greater(int a,int b){
    //     if (a>b) return true;
    //     return false;
    // }

    sort(arr,arr+6,greater<int>()); //greater inbuilt function for decreasing sorting.
    for(auto i:arr){
        cout<<i<<endl;
    }

    pair<int,int> a[]={{1,2},{3,2},{2,3},{10,4}};
    sort(a,a+4,comp);//sort based on second in increasing,and same then smaller one should come first.
    
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}