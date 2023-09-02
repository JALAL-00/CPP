// Program to check whether an integer is positive, negative or zero
#include<iostream>

using namespace std;
int main (){
    int number;
    cout<<"Enter a integer: ";
    cin>>number;
    if(number > 0){
        cout<<"You entered a positive number: "<<number<<endl;
    }
    else if (number < 0){
        cout<<"You entered a negative number: "<<number<<endl;
    }
    else{
        cout<<"You entered a 0. "<<endl;
    }
    cout << "This line is always printed.";
}