// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a integer: ";
    cin>>num;
    //outer if condition
    if(num !=0 ){
        if(num > 0){
            cout<<"You entered a positive integer. "<<endl;
        }
         // inner else condition
         else{
            cout<<"The number is negative. "<<endl;
         }
    }
    // outer else condition
    else{
        cout<<"The number is zero and it is nigther positive or negative. "<<endl;
    }
    cout<<"This line is always printed ";

    return 0;
}  
