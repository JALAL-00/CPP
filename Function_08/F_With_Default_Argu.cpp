#include<iostream>
using namespace std;

void IntroduceMe(string name, string city, int age=0){
    cout<<"My name is "<< name <<endl;
    cout<<"I am form "<< city <<endl;
    if(age!=0)
    cout<<"I am "<< age << " Years old "<<endl;

}


int main(){
    string name, city;
    int age;
    cout<<" Name: ";
    cin>>name;
    cout<<" City: ";
    cin>>city;
    cout<<" Age: ";
    cin>>age;
    cout<<endl;
    IntroduceMe(name, city, age);

    return 0;
}