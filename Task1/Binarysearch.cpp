#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int>& arr,int x){
int low=0;
int high=arr.size()-1;
while (low<=high)
{ int  mid=low + (high-low)/2;
//check if x is at mid
if (arr[mid]==x)
{
return mid;
}
else if (arr[mid]>x)
{
high=mid-1;
}
else 
{
low=mid+1;
}      
}
return -1;
}   
int main() {
vector<int> arr = {12,13,14,15,16,17,18};
int x = 18; 
int result = binarysearch(arr, x); 
if(result == -1) {cout << "Element is not present in array"<<endl;}
else cout<< "Element is present at index " << result<<endl;
return 0;
}