#include<iostream>
using namespace std;

int main()
{
    //*******ARRAYS**********
    int marks[4]= {23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[1]=47;  //changing value of array
    cout<<"Changed mark: "<<marks[1]<<endl;
    cout<<endl;


    //Printing all elements of array together
    cout<<"All marks together: "<<endl;
    for (int i = 0; i <=3; i++)
    {
        cout<<marks[i]<<endl;
    }
   cout<<endl;


   //Pointers and Arrays
   int* p= marks;
   cout<<*(p++)<<endl;//ab jab upar wali line execute hui to pointer 2nd value pe chala gya
   cout<<*(++p)<<endl;//pointer jo ki second value pe hai vo pehele increase ho kr third pe ja kar third wale ko print kr rha hai.
//    cout<<"The value of *p is "<<*p<<endl;
//    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
//    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}