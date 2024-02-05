#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"You are younger";
    }
    else if(age<=40){
        cout<<"You are above 18 and lesser than 40";
        if(age>20){
            cout<<",but you are older than 20";
        }
    }
    else{
        cout<<"u are older than 40";
    }
    return 0;
}