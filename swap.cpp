#include <iostream>
using namespace std;
void swap(int* a,int* b){ // a and b are pointers
   int temp= *a; // dereference operator to get value stored at adress a
    *a=*b;
    *b=temp;}// swpping a and b using pointer reference.
void swap1(int &a,int &b){ 
   int temp= a; 
    a=b;
    b=temp;} // swapping using reference variables  
int main() {
    int x=4,y=5;
    cout<<"Before swapping,The value of x before  is "<<x<<" and value of y is "<<y<<endl;
    swap(&x,&y); // adress at x and y 
    cout<<"After swapping 1,The value of x before  is "<<x<<" and value of y is "<<y<<endl;
    swap1(x,y);
    cout<<"After swapping 2,The value of x before  is "<<x<<" and value of y is "<<y<<endl;
    return 0; }
