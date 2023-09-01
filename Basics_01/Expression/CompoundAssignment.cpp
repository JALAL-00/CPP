//A compound assignment expression is an expression which is a combination of an assignment operator and binary operator.
/*
For example,

a+=10; 
In the above statement, 'a' is a variable and '+=' is a compound statement.
  */

#include <iostream>  
using namespace std;  
int main()  
{  
  int a=10;   // variable declaration  
  a+=10;    // compound assignment  
  std::cout << "Value of a is :" <<a<< std::endl; // displaying the value of a.  
  return 0;  
}  


//In the above code, we have declared a variable 'a' and assigns 10 value to this variable. Then, we applied compound assignment operator (+=) to 'a' variable, i.e., a+=10 which is equal to (a=a+10). This statement increments the value of 'a' by 10.