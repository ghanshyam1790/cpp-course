#include<iostream>
using namespace std;

int main()
{
    /*****POINTERS*****
    data type which holds the address of the other data types.*/ 
    int a=3;
    int* b= &a;
    /* int* ka mtlb hai ki ek aisa pointer bna do jo ki int pe point krta ho
    and uska naam b rakh diya which is equal to address of a,    chk img in gallery date 12/7/26
    &------> (Address of) operator
    *------>{(value at) operator} Dereference operator*/
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The value at address b is "<<*b<<endl;


    //POINTER TO POINTER VARIABLE
    //aisa variable jo pointer ki address ko store krta hai. EG:
    int** c= &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(address_at(c)) is "<<**c<<endl;

    return 0;
}