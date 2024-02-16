#include <bits/stdc++.h>
using namespace std;
int main(){
    // declaring vector
    vector<int> v;
    // adding elements
    v.push_back(2); 
    v.push_back(2); 
    v.emplace_back(3); // similar to push_back ,but faster.
    // printing by index
    cout<<v[0]<<" "<<v[1]<<endl;

    // vector of pairs
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(2,4); //no need of the curly braces.
    // printing by pair.first and pair.second
    cout<<vp[0].first<<" "<<vp[1].second<<endl;
    
    vector<int> v2(5,1); // vector with the 1 value of size 5
    cout<<v2[0]<<endl;

    vector<int> v3(10); // initialize the vector with 0 or garbage value,of size 10
    cout<<v3[9]<<endl; //can access with index also
    

    // !Iterator,gives the address of vector element.

    vector<int>::iterator it=v.begin();
    cout<<*it; // will give the first element in vector v;
    it++; // goes to next address after first element.
    cout<<endl<<*it<<endl;

    auto it2=v.end();//it gives access to the after the last element.automatically assign the datatype based on data.
    it2--;
    cout<<*it2;
    
    cout<<v.back()<<endl;//last element in vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" "<<endl;
    }

    for(auto it:v){
        cout<<it<<" "<<endl;
    }
    

    // * Erase and insert,pop_back,swap,clear,copy
    // {2,2,3}
    v.erase(v.begin(),v.begin()+2); //act like slicing ,which dont consider last index.
    cout<<v.at(0)<<endl; //{3}

    v.insert(v.begin(),100); //{100,3}
    v.insert(v.begin()+1,2,200); //{100,200,200,3}

    for(auto i:v) cout<<i<<endl;
     
    vector<int> copy(2,300);
    v.insert(v.begin(),copy.begin(),copy.end());//{300,300,100,200,200,3}
    
    cout<<v.size()<<endl; //gives size of vector

    v.swap(copy); //swap two vector
    cout<<v.size()<<endl;
    v.clear();//clear entire vector
    cout<<v.size();
    // vector.back() for last element in vector
    return 0;
}