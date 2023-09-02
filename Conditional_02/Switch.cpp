//selection control struture: Switch case-statment
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    switch (age)
    {
    case  18:
        cout<<"You are 18"<<endl; 
        break;
    case  22:
        cout<<"You are 22"<<endl; 
        break;
    case  15:
        cout<<"You are 15"<<endl; 
        break;
    case  5:
        cout<<"You are 15"<<endl; 
        break;
    
    default:
    cout<<"No Special cases"<<endl;
        break;
    }
    cout<<"Done with Switch case "<<endl;

   return 0;
}