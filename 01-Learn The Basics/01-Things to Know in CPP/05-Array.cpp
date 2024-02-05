#include <bits/stdc++.h>
using namespace std;
int main(){
    int onedarr[4];
    onedarr[0]=1;
    onedarr[2]=2;
    cout<<onedarr[0]<<endl<<onedarr[1]<<endl;

    int twodarr[2][3];
    twodarr[0][0]=3;
    twodarr[0][1]=4;
    cout<<twodarr[0][1]<<endl<<twodarr[1][0];// will throw some garbage value,coz not assinged.
    return 0;
}