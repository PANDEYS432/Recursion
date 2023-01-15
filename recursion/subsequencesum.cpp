#include <iostream>
 #include<vector>
 using namespace std;
 // print any 1 subseq whose sum is k
 bool subsum(int index,vector<int> &ds,int s,int sum,int arr [],int n){
      if(index==n){
        if(s==sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;   
          return true;
        }
        else return false;
      }
      ds.push_back(arr[index]);
      s+=arr[index];
     if( subsum(index+1,ds,s,sum,arr,n)== true){
        return true;
     }
      s-=arr[index];
      ds.pop_back();
      //not pick
      if(subsum(index+1,ds,s,sum,arr,n)== true){
        return true;
      }
 }
 int main(){
    int n=3;
    int sum=2;
    int arr[]={1,2,1};
    vector<int> ds;
    subsum(0,ds,0,sum,arr,n);
    return 0;
 }