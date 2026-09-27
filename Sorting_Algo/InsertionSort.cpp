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
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Insertion_Sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl; 
    

    return 0;
}