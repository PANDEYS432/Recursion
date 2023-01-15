#include <iostream>
#include<vector>
using namespace std;
void subs(int index,vector<int>ds,int arr[],int n){
 if(index==n){
    for(auto it: ds){
        cout<< it<<"";
    }

if(ds.size()==0){
    cout<<"{}";

}
cout<<endl;
return;
}
//to pick elements for subsequence
 ds.push_back(arr[index]);
 subs(index+1,ds,arr,n);
 ds.pop_back();
 // not take elements for subsequence
 subs(index+1,ds,arr,n);
}

int main(){
    int n=3;
    int arr[]={3,1,2};
    vector<int> ds;
    subs(0,ds,arr,n);
    return 0;
}