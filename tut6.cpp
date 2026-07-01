/*Header File
There r two type of header files:
1)System Header files- It comes with compiler, eg. #include<iostream>
2) User defined header files- It is written by the programmer.
how it is written- #include "koi bhi random file ka naam jo ki exist krti ho"
Kitni header files hoti hai kahan se dekhe?
search cpp reference for header files(cpp reference.com)*/
//#TYPES OF OPERATORS IN C++
#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Following are types of operators in C++:"<<endl;
    //Arithematic Operators
    cout<<"Arithematic Operators:"<<endl;
    cout<<"The vaue of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;//Ans is zero bcz integer ka output is integer.
    cout<<"The value of a%b is "<<a%b<<endl;//Remainder
    cout<<"The value of a++ is "<<a++<<endl;//pehele a print kiya phir use system me preced kr diya by one.
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;//This program may be termed as most basic calculator.
    cout<<endl;
//Assignment Operator- Used to assign values to variables.

//Comparison Operator- Used for comparison.
cout<<"Comparison Operators:"<<endl;
cout<<"The value of a==b is "<<(a==b)<<endl;//ye purple wale brackets jaruri hai.
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;
cout<<endl;

//Logical Operator
cout<<"Logical AND operator "<<((a==b) && (a<b))<<endl;//dono true honge tab hi ans true.
cout<<"Logical OR operator "<<((a==b) || (a<b))<<endl;//dono me se ek bhi true hoga tab ans true.
cout<<"Logical NOT operator "<<(!(a==b))<<endl;
 return 0;
}