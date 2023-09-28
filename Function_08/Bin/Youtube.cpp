// #include<iostream>
// using namespace std;
// int add(int num1, int num2){
//     int c = num1 + num2;
//     return c;
// }
// int main(){
//     // int num1, num2;
//     cout<<" Sum is "<<add(2 , 3);

//     return 0;
// }

//---------------------------------------------------------------------

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     cout<<pow(2,3)<<endl;
//     cout<<sqrt(24)<<endl;

//     int ans = sqrt(24);
//     cout<<ans<<endl;
//     double Double =  sqrt(24);
//     cout<<Double<<endl;

//     return 0;
// }

//-------------------------------------------------------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter (0-100) for your grade: ";
//     cin>>marks;
//     if(marks<=100 && marks>=91){
//          cout<<"The grade of a student is AA.";
//     }
//     else if(marks<=90 && marks>=81){
//          cout<<"The grade of a student is AB.";
//     }

//     else if(marks<=80 && marks>=71){
//          cout<<"The grade of a student is BB.";
//     }

//     else if(marks<=70 && marks>=61){
//          cout<<"The grade of student is BC.";
//     }

//     else if(marks<=60 && marks>=51){
//          cout<<"The grade of a student is CD.";
//     }

//     else if(marks<=50 && marks>=41){
//          cout<<"The grade of a student is DD.";
//     }
//     else if(marks<=40)
//     {
//         cout<<"The student is fail.";
//     }
//     else
//     {
//         cout<<" Bye Bye";
//     }

//     return 0;
// }

//---------------------------------------------------------------

// #include<iostream>
// using namespace std;
// string grade(int marks){

//     if(marks<=100 && marks>=91){
//          cout<<"The grade of a student is AA.";
//     }
//     else if(marks<=90 && marks>=81){
//          cout<<"The grade of a student is AB.";
//     }

//     else if(marks<=80 && marks>=71){
//          cout<<"The grade of a student is BB.";
//     }

//     else if(marks<=70 && marks>=61){
//          cout<<"The grade of student is BC.";
//     }

//     else if(marks<=60 && marks>=51){
//          cout<<"The grade of a student is CD.";
//     }

//     else if(marks<=50 && marks>=41){
//          cout<<"The grade of a student is DD.";
//     }
//     else if(marks<=40)
//     {
//         cout<<"The student is fail.";
//     }
//     else
//     {
//         cout<<" Bye Bye";
//     }
// }

// int main(){
//     int marks;
//     cout<<"Enter (0-100) for your grade: ";
//     cin>>marks;
    
//     cout<<grade(marks);
// }

//-------------------------------------------------------------------------

//Q. Write a function to print square of the first 5 Natural no.
// #include<iostream>
// using namespace std;

// int square(int x){
//     return x*x;
// }

// int main(){
//     for(int i=0; i<=5; i++){
//         cout<<square(i)<<" ";
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------

//Q. Given Radious of a circle. Write a function to print the area and circumerence of the circle.
// #include<iostream>
// using namespace std;

// double circumference(int r){
//     return 2 * 3.1416 * r;
// }

// double radious(int r){
//     return 3.1416 * r * r;
// }

// int main(){
//     int r;
//     cout<<"Enter the radious value: ";
//     cin>>r;
//     cout<<"Circumference value is "<<circumference(r)<<" "<<"Radious value is "<<radious(r);
//     return 0;
// }

//------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// void Check(int age){
//     if(age>=18){
//         cout<<"You are eligible to vote.";
//     }
//     else{
//         cout<<"You are not eligible to vote.";
//     }
// }

// int main(){
//     int age;
//     cout<<"Enter age for check eligiblity :";
//     cin>>age;
//     Check(age);
// }

//-------------------------------------------------------------------------------

//Q. Given Tow numbers a and b, Write a programe using using functions to print all the odd number between them.
// #include<iostream>
// using namespace std;

// bool isOdd(int num){
//     if(num%2==0){
//         //The number is even
//         return false;
//     }
//     else{
//         //The number is odd
//         return true;
//     }
// }
// int main(){
//     int a=1, b=10;
//     for(int i=a; i<=b; i++){
//         if(isOdd(i)){
//             cout<<i<<" ";
//         }
//     }
// }


// #include <iostream>
// using namespace std;

// int main()
// {
// 	int i,n;
// 	cout << "\nENTER A NUMBER: ";
// 	cin >> n;
// 	cout << "\nODD NUMBERS BETWEEN 1 AND " << n << " ARE: \n";
// 	for(i=1;i<=n;i+=2)
// 	{
// 		cout << i << " ";
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// void Odd(int num){
//     if(num%2==0){
//         cout<<"Number is even: ";
//     }
//     else{
//         cout<<"Number is odd: ";
//     }
// }

// int main(){
//     int i, num;
// 	cout << "\nENTER A NUMBER: ";
// 	cin >> num;
// 	cout << "\nODD NUMBERS BETWEEN 1 AND " << num << " ARE: \n";
// 	for(i=1;i<=num;i+=2)
// 	{
// 		cout << i << " ";
// 	}
// 	return 0;
// }

//----------------------------------------------------------------------


