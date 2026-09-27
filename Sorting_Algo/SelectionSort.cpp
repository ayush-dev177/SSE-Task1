#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void  Selection_Sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
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
    Selection_Sort(arr,n);
     cout<<"Sorted Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;  
    return 0;
}