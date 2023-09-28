#include<iostream>
using namespace std;

void Check(int x){
    if(x%2==0)
       cout<<"x is even\n";
    else
       cout<<"x is odd";
}
int main(){
    Check(4);
    Check(5);

    return 0;
}