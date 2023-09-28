/*program for function with arguements*/
#include<iostream>
using namespace std;

float add(float a, float b){
    float z;
    z=a+b;
    return z;
}
int main(){
    float a=2.5, b=1.6, z;
    z=add(a, b);
    cout<<z<<endl;
    return 0;
}
