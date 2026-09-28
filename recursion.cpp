#include <iostream>
#include <string>
// Basic Recursion Problems
using namespace std;
// To print Name N times using recursion
void fn(string name,int i,int n){
    if (i>n)
    {
        return;
    }
    cout<<name<<endl;
    fn(name,i+1,n);  
}
void fn2(int i,int n){
    if (i<1)
    {
        return;        
    }
    cout<<i<<endl;
    fn2(i-1,n);
}
int main() {
    int n;
    cout<<"How many times do you want to print your name?"<<endl;
    cin>>n;
    cin.ignore();
    string name;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    fn(name,1,n);
    int N;
    cout<<"from which number you want to print till 1?"<<endl;
    cin>>N;
    fn2(N,N);
    return 0;
}