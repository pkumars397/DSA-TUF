#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    default:
        cout<<"Invalid"<<endl; 
    cout<<"end"; // it will also print if not break after some condition.
    }
    return 0;
}