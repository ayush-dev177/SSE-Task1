#include <iostream>
using namespace std;
// Print N to 1 using backtracking
void nto1(int i,int n){
if (i>n) return;
nto1(i+1,n);
cout<<i<<endl;}
// Factorial using recursion
int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);}
int main(){
int n;
cout<<"Enter n to print numbers from n to 1 and calculate its factorial:";
cin>>n;
nto1(1,n);
cout<<"The factorial of "<<n<<" is :"<<fact(n)<<endl;
return 0;}
