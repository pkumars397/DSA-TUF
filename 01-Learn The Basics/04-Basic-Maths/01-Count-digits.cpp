#include <bits/stdc++.h>
using namespace std;
int countdigits(int num){
    // method 1
    int count=0;
    while(num>0){
        count+=1;
        num=num/10; //tc O(log10n)
    }
    return count;
}

int countdigits2(int n){
    int count=(int)log10(n)+1;
    return count;
}
int main(){
    int numb=1992;
    cout<<countdigits2(numb);
    return 0;
}