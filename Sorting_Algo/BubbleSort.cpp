#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void bubblesort(vector<int>&arr){
int n=arr.size()-1;
bool swapped;
for(int i=0;i<n;i++){
swapped=false;
for(int j=0;j<n-i;j++){
if (arr[j] > arr[j + 1]) {
swap(arr[j], arr[j + 1]);
swapped = true;}}
if (!swapped){
break;}
}
}
int main() {
int n;
    cout<<"Enter Number Of Elements in The Array:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Elements of The Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr);
     cout<<"Sorted Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl; 
    return 0;
}