#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
   
   if(i>n)
   return;
   
   cout<<i<<'\n';
   f(i+1,n);
}
void fn(int i,int n){
    if(i==0)
    return;
   
    cout<<i<<'\n';
    fn(i-1,n);
}
void fnn( int i,int n){
    if(i<1)
    return;
    fnn(i-1,n);
    cout<<i<<endl;
}
void fnm( int i,int n){
    if(i>n)
    return;
    fnm(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
 cout<<"print from 1 to n"<< endl;
    f(1,n);
     cout<<"print from n to 1"<< endl;
    fn(n,n);
    cout<< "backtracking 1 to n"<<endl;
    fnn(n,n);
    cout<< "backtracking n to 1"<<endl;
    fnm(1,n);
return 0;
}