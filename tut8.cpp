#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //CONSTANTS IN C++
    const int a=3;
    //ye const se ye hoga ki a ki value ab nhi badlegi(agr koi galti se change bhi kar de to error dega) like we r changing b in following.
    cout<<"value of a is "<<a<<endl;
    int b=34;
    cout<<"value of b was "<<b<<endl;
    b=65;
    cout<<"value of b is "<<b<<endl;//yahan b ki value change ho gayi.
    cout<<endl;

    //Manipulators- two hote hain mainly ekto "endl" dusra setw() jiske liye "#include<iomanip>" lana hota hai
    //setw() bracket me jo bhi likha rhta hai utna right se space lata hai.  EG:
    int x=3, y=78, z=1233;
    cout<<"value of x without setw is "<<x<<endl;
    cout<<"value of y without setw is "<<y<<endl;
    cout<<"value of z without setw is "<<z<<endl;

    cout<<"value of x with setw is "<<setw(4)<<x<<endl;
    cout<<"value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"value of z with setw is "<<setw(4)<<z<<endl;
    cout<<endl;


    //OPERATOR PRECEDENCE- jake us site pe dekh lena.
    // jab operator precedence equal hoti hai tab ham associativity dekhte hai, wo bhi usi site pe dekh lena.
    return 0;
}