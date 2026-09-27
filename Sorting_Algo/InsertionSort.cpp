#include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
void  Insertion_Sort(vector<int> &arr,int n){
    for (int i = 0; i < n; i++)
    {
        int j=i;
       while (j>0 && arr[j-1]>arr[j])
       {
         swap(arr[j-1],arr[j]);
         j--;
       } 
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
    Insertion_Sort(arr,n);
    cout<<"Sorted Array:"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl; 
    return 0;
}