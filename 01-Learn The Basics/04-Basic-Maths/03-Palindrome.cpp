#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int sign=1;
        if(x<0) sign=-1;;
        int temp=x;
        temp=abs(temp);
        long rev=0;
        while(temp){
           rev=rev*10+temp%10;
           temp=temp/10;
        }

        if(rev*sign==x) return true;
        return false;
    }

int main(){
    int n=-121;
    cout<<isPalindrome(n);
    return 0;
}