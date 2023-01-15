#include<bits/stdc++.h>
using namespace std;
int main(){
  // array<int ,4>arr;

//   for(int i=0;i<arr.size();i++)
//   {
//    cout<<arr.at(i)<<'\n';
//   }

// 

 array<int, 5> arr = { 1, 5, 2, 4, 7 };
 
    // prints the last element
    cout << "The last element is " << *(arr.rbegin()) << endl;
 
    // prints all the elements
    cout << "The array elements in reverse order are:\n";
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << endl ;
        cout<<"array elements in forward order \n";
    for(auto it=arr.begin(); it!=arr.end(); it++){
      cout << *it<< '\n';
    }
    cout << "forward order \n";
    for(auto it= arr.end()-1; it>=arr.begin(); it--){
          cout<< *it<< '\n';
    }
    for(auto it: arr)
    {
    
      cout<<it<<" ";
    }
    
   return 0;
}