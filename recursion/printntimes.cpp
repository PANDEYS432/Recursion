#include<bits/stdc++.h>
using namespace std;
 void print(int n){
    if(n==0)
    return;
    cout<<"raj"<<endl;
    print(n-1);
 }
int main(){
    int n;
      cout<<"enter n"<<endl;
    cin>>n;
   print(n);
    return 0;
}