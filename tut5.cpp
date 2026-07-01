#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    string name;
    cout<<"Enter number one:"<<endl;
    cin>>num1;
    cout<<"Enter number two:"<<endl;
    cin>>num2;
    cout<<num1*num2<<endl;

    cout<<"Enter your name:";
    cin>>name;//Note- cin stops taking data after founding space. For reading with spaces we use "getline(cin, variable name)".
    cout<<"Your name is "<<name;

     return 0;
}