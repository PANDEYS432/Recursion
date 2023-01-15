#include<bits/stdc++.h>
using namespace std;
void swp(int i,int arr[],int n ){
    if(i>=n/2);
    return;
     cout<<"array is"; 
    swap(arr[i],arr[n-i-1]);
    cout<<"array is";
    swp(i+1,arr,n);
      for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n,i;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    swp(0,arr,n);
   
}