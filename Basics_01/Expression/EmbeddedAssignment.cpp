//An embedded assignment expression is an assignment expression in which assignment expression is enclosed within another assignment expression.

#include <iostream>  
using namespace std;  
int main()  
{  
 int a;  // variable declaration  
 int b;  // variable declaration  
 a=10+(b=90);  // embedded assignment expression  
 std::cout <<"Values of 'a' is " <<a<< std::endl;  
 return 0;  
}  

//In the above code, we have declared two variables, i.e., 'a' and 'b'. Then, we applied embedded assignment expression (a=10+(b=90)).
