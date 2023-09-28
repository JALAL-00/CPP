#include<iostream>
using namespace std;

void myFunction(string country ="Bangladesh"){
    cout<<country<<"\n";
}

int main(){
    myFunction("India");
    myFunction("France");
    myFunction();
    myFunction("Pakistan");

    return 0;
}