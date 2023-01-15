#include<bits/stdc++.h>
using namespace std;
void sumof(int i, int sum){
if(i<1){
    cout<<sum<<endl;
return;}
sumof(i-1,sum +i);

}
int sumf(int n){
    if (n==0)
    return 0;
    return n+sumf(n-1);
}
int fact(int n){
    if (n<1)
    return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>> n;
    cout<<"parameterisedfn \n";
    sumof(n,0);
    cout<< "functional recursion \n";
   cout<< sumf(n)<<endl;
   cout<< "factorial \n";
   cout<< fact(n)<<endl;


return 0;

}