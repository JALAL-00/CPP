#include<iostream>
using namespace std;

void IntroduceMe(string name, string city, int age=0){
    cout<<"My name is "<< name <<endl;
    cout<<"I am form "<< city <<endl;
    if(age!=0)
    cout<<"I am "<< age << " Years old "<<endl;

}


int main(){

    IntroduceMe("JALAL", "DHAKA", 22);
    cout<<endl; 
    IntroduceMe("MAHTAB", "COMILLA" );

    return 0;
}