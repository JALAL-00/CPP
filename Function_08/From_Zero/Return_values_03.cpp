#include<iostream>
using namespace std;

int myFunction(int x, int y){
    return x+y;
}

int main(){
    int z = myFunction(3, 5);
    cout<<z;

    return 0;
}