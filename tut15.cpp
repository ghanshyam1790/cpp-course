#include<iostream>
using namespace std;

//******FUNCTIONS and FUNCTION PROTOTYPE******* 
int sum(int a, int b)
{
    //a and b will be taking values from actual parameters which are formal parameters
    int c= a+b;
    return c;
}
/* Function Prototype(just assurity deta ki aage function milega)
Syntax:(example below this****)
type function-name(arguments);
aur phir jab man kre function define krdo, same jaisa krte ho.
int sum(int a, int b);------> Acceptable
int sum(int a, b);------> Not Acceptable
int sum(int, int );------> Acceptable*/
void greet();


int main()
{
    greet();
    int num1, num2;
    cout<<"Enter first no. "<<endl;
    cin>>num1;
    cout<<"Enter second no. "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters.
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}

//Writing function without returning value and even showing a prototype function.
 void greet(){
    cout<<"Hello, Good Morning\n";
 }