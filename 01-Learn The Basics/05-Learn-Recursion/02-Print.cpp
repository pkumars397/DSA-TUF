#include <bits/stdc++.h>
using namespace std;
int counter=0;
void print(){
  if(counter==3) return;
  cout<<counter<<endl;
  counter++;
  print();
}
int main(){
    print();
    return 0;
}

// it is good to track the functions calls in recursion tree.here four times function got called.