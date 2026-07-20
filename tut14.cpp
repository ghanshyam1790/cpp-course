#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;


union money
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    union money m1;
    m1.rice=34;  
    cout<<m1.rice<<endl;//ek time pe ek hi use kr skte hai wrna second use kroge to rewrite ho jayega automatic.
    //Reason for using once at a time bcz now memory is being shared with all at one.
    cout<<endl;


    ep harry;
    struct employee ghanshyam;
    harry.eId= 1;
    harry.favChar= 'c';
    harry.salary= 1200000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    cout<<endl;

    enum Meal{breakfast, lunch, dinner};
    //enum allocates specific no. to thm.
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    
    return 0;
}