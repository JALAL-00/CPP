/*program for function overloading sum of two integers */
#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<sum(5, 7)<<endl;
    cout<<sum(1.5f, 2.6f)<<endl;
    cout<<sum(2, 5, 7)<<endl;
}