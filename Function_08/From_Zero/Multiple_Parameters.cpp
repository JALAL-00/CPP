#include<iostream>
using namespace std;

void myFunction(string fname, int age){
    cout<<fname<<" Refsnes. "<<age<<" years old. \n";
}

int main(){
    myFunction("Jalal", 21);
    myFunction("Bahauddin", 17);
    myFunction("Waes", 20);

    return 0;
}