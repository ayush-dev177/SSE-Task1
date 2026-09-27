#include <iostream>
#include <string>
using namespace std;

int main() {
    string msg="This is a string";
    cout<<"THe vallue of msg is "<< msg << endl;
    getline(cin,msg);
    cout<<"The message entered by you is "<< msg << endl;

    return 0;
}