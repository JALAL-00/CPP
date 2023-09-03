//Finding factors of a number
#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0; i<=n; i++)
    {
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}