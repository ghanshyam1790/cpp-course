#include<iostream>
using namespace std;

//Fibonacci sequence ke liye recursion
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);   
}

//Factorial ke liye recursion
int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}

int main()
{
    //*********RECURSION********* 
    int a;
    int b;
    cout<<"Enter a no. "<<endl;
    cin>>a; 
    cout<<"The factorial of "<<a<<" is "<<factorial(a);
    cout<<endl;
    

    cout<<"Enter position of the term you would like to find in fibonacci series "<<endl;
    cin>>b; 
    cout<<"The "<<b<<"th term is "<<fib(b);


    return 0;
}