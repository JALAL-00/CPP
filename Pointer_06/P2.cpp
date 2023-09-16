#include<iostream>
using namespace std;
int main(){
    int num1 = 10;
    int num2 = 20;

    int *P1, *P2;

    P1= &num1;
    P2= &num2;
    int sum = *P1 + *P2;
    cout<< sum;

    return 0;
}