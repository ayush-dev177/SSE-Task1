#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>&arr,int x){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==x)
        {
          return i;  
        }
    }
    return -1;  //if element is not present returns -1            
}
int main() {
    int n;
     cout<<"Enter the size of array:"<<endl;
     cin>>n;
    vector<int> arr(n);
    cout<<"Enter the integer elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int  num;
    cout<<"Enter the number to search its index:"<<endl;
    cin>>num;
    int res=search(arr,num);
    if (res==-1)
    {
        cout<<"The given element is not present in the array"<<endl;
    }
    else{
        cout<<"The given element is  present in the array at index "<<res<<endl;   
    }
    return 0;
}