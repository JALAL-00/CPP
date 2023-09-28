   "Without Parameters"
#include<iostream>
using namespace std;
void MyFunction(){
    cout<<"This is my first Program\n";
    cout<<"This is my first Program\n";
    cout<<"This is my first Program\n";
}
int main(){
    MyFunction();
    return 0;
}
-----------------------------------------------------

#include<iostream>
using namespace std;
void MyFunction();
int main(){
    MyFunction();
    return 0;
}
void MyFunction(){
    cout<<"Code will run\n";
}
------------------------------------------------------


   "With Parameters"
#include<iostream>
using namespace std;

void myFunction(string Fname){
    cout<<Fname<<" Is a good boy\n";
}
int main(){
    myFunction("Jalal");
    myFunction("Sakib");
    return 0;
}
--------------------------------------------------------


   "Default Parameters"
#include<iostream>
using namespace std;

void myFunction(string country ="Bangladesh"){
    cout<<country<<"\n";
}

int main(){
    myFunction("India");
    myFunction("France");
    myFunction();
    myFunction("Pakistan");

    return 0;
}
---------------------------------------------------------------

    "Multiple Parameters"
#include<iostream>
using namespace std;

void myFunction(string fname, int age){
    cout<<fname<<" Refsnes. "<<age<<" years old. \n";
}

int main(){
    myFunction("Jalal", 21);
    myFunction("Bahauddin", 17);
    myFunction("Waes", 20);

    return 0;
}
------------------------------------------------------------------

     "Return values"
#include<iostream>
using namespace std;

int myFunction(int x){
    return 5 + x;
}

int main(){
    cout<<myFunction(3);

    return 0;
}

#include<iostream>
using namespace std;

int myFunction(int x, int y){
    return x+y;
}

int main(){
    cout<<myFunction(3, 8);

    return 0;
}


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



     "Pass By Reference"
#include<iostream>
using namespace std;

void swapNum(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int firstNumber=10;
    int secondNumber=20;

    cout<<"Befor swap"<<"\n";
    cout<< firstNumber <<" "<< secondNumber <<"\n";

    swapNum(firstNumber, secondNumber);

    cout << "After swap: " << "\n";
    cout << firstNumber <<" "<< secondNumber << "\n";

    return 0;
}

