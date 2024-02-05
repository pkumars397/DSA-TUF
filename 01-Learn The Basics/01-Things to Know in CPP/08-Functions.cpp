#include <bits/stdc++.h>
using namespace std;
// void ,return of any type

void printName(string name){
    cout<<name<<endl;
}

int total(int n1,int n2){
    return n1+n2;
}
int main(){
    string name;
    cin>>name;
    printName(name);

    int n1,n2;
    cin>>n1>>n2;
    cout<<total(n1,n2);
    return 0;
}