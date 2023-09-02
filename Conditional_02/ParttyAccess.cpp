//selection control struture: if-else if-else ladder

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age for access party: "<<endl;
    cin>>age;

    if((age<18) && (age>0)){
        cout<<"You can not come to party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid, you can join with kid pass"<<endl;
    }
    else if(age<1){
        cout<<"you are not yeat Bron"<<endl;
    }
    else{
        cout<<"you can join my party"<<endl;
    }
}