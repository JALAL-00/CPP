#include<iostream>
using namespace std;

void doB(){
    cout<< "In doB" <<"\n";
}

void doA(){
    cout<< "Starting doA" <<"\n";

    doB();

    cout<< "Ending doA" <<"\n";
}

int main(){
    doA();

    return 0;
}