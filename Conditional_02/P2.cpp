// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a integer: ";
    cin>>number;

    if(number >= 0){
        cout<<"You entered a positive inetger: "<< number << endl;
    }
    else{
        cout<<"You entered a negative integer: "<< number << endl;
    }
    cout<<"This line is always executed: ";
}