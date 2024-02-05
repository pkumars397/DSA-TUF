#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="abc";
    int len=str.size();
    str[len-1]='d';// mutable
    cout<<str;
    return 0;
}