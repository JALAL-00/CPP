#include<iostream>
using namespace std;
int main(){
    int n, i , sum=0;
    cout<<"Enter a natural number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum of Natural number is: "<< sum <<endl;
    return n;
}