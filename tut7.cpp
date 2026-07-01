#include<iostream>
using namespace std;

int main(){
    //***********BUILD IN DATA TYPES***********
    //***********FLOAT, DOUBLE, LONG DOUBLE LITERALS***********
    float d=34.4f;
    long double l=34.4l;
    // f aur l system ko batane ke liye lagate ki ye float hai ya long double warna ye by default double consider karega.
    // PROOVING IT BELOW 
    cout<<sizeof(34.4)<<endl;
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4F)<<endl;

    cout<<sizeof(34.4l)<<endl;
    cout<<sizeof(34.4L)<<endl;
    cout<<endl;

    //All data types
     int age = 18;
    float height = 5.8;
    char grade = 'A';
    bool isStudent = true;
    string name = "Ghanshyam";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;
     cout<<endl;

    //***********REFERENCE VARIABLES***********
    //program me kisi vaule to 2 alg alg same reference se bulane chahte hai to we use ref variable
    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;


    //***********TYPE CASTING***********
    //kisi bhi ek variable ko dusre me change krna
    int a=68;
    float b=98.77;
    cout<<"The value of a in float is "<<(float)a<<endl;//can be written as float(a) this also.
    cout<<"The value of b in interger is "<<(int)b<<endl;
    int c= int(b);
    cout<<c<<endl;
    cout<<endl;

    
    cout<<a+b<<endl;
    cout<<a+int(b)<<endl;
    cout<<a+(int)b<<endl;
    return 0;
}
