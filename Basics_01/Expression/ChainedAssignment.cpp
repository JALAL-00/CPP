/*For example:

a=b=20   
 or   
(a=b) = 20  */

#include <iostream>  
using namespace std;  
int main(){
  
 int a;   // variable declaration  
 int b;   // variable declaration  
 a=b=80;  // chained assignment  
 std::cout <<"Values of 'a' and 'b' are : " <<a<<","<<b<< std::endl;  
 return 0;  
}  
