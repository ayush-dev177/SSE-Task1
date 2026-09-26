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
vector<int> arr= {13,4,5,3,7,9,12};
bubblesort(arr);
cout << "Sorted array: \n";
for (int num : arr){
 cout << " " << num ;}  
return 0;
}

 