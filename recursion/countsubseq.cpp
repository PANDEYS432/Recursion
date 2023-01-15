#include <iostream>
 #include<vector>
 using namespace std;
 // count subseq whose sum is k
 int subsum(int index,int s,int sum,int arr [],int n){
      if(index==n){
        if(s==sum){
          
          return 1;
        }
        else return 0;
      }
    
      s+=arr[index];
     int l= subsum(index+1,s,sum,arr,n);
      s-=arr[index];
      int r=(subsum(index+1,s,sum,arr,n)== true);
      return l+r;
 }
 int main(){
    int n=3;
    int sum=2;
    int arr[]={1,2,1};

   cout<< subsum(0,0,sum,arr,n);
    return 0;
 }