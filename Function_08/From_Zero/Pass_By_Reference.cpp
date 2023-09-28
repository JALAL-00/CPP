#include<iostream>
using namespace std;

void swapNum(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int firstNumber=10;
    int secondNumber=20;

    cout<<"Befor swap"<<"\n";
    cout<< firstNumber <<" "<< secondNumber <<"\n";

    swapNum(firstNumber, secondNumber);

    cout << "After swap: " << "\n";
    cout << firstNumber <<" "<< secondNumber << "\n";

    return 0;
}