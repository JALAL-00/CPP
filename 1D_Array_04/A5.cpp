//Run Time Error, error: too many initializers for 'int [5]':
#include<iostream>
using namespace std;
int main(){
    int A[5]={3,4,5,6,7,8,9};
    for(int i=0; i<5; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}