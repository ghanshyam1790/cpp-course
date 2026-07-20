#include<iostream>
using namespace std;

inline int product(int a, int b)
    {//INLINE FUNCTION SHOULD NOT USED WITH STATIC VARIABE
        //static int c=0;//This executes only once
        //c=c+1;//Next time this function is run, the value of c is retained
        return a*b;//+c;
        //You may try to remove those comments are know the use of static fn
    }

int main()
{
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The desired output is "<<product(a, b)<<endl;
    cout<<"The desired output is "<<product(a, b)<<endl;
    cout<<"The desired output is "<<product(a, b)<<endl; 
    
    //DEFAULT ARGUMENTS----> If we give any one of the value inside the function itself. The function automatic takes that value until its being provided inside the code.
    //Function call bhi krte samay jiski value put kar diye usko call me mat likho.
    //Hamesha default arguments ko last me likhna and fnc ke
    //Eg.---> upar wale fnc me b ki value default kr skte na ki a ki.


    //CONSTANT ARGUMENT----> Just const laga do uske aage.
    
    return 0;
}