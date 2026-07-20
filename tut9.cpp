/*C++ CONTROL STRUCTURES
3 TYPES KE HOTE HAI(basic wale)
1)Sequence Structure
2)Selection Structure
3)Loop Structure
chk video t=4.15 for good notes, aage bhi dekhna thoda bahut*/
#include<iostream>

using namespace std;
//**********SELECTION STRUCTURE**********
//METHOD 1 OF IMPLEMENTING IT- IF ELSE LADDER

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if((age<18)&&(age>0)){//use of and operator
        cout<<"You cannot come to the party"<<endl;
    }
    else if (age==18){
        cout<<"Your r kid but can come to party"<<endl;
    }
    else if (age<1){
       cout<<"You r not yet born"<<endl;
    }
    
    else{
        cout<<"You can come to party"<<endl;
    }
    cout<<endl;
 
//METHOD 2 OF IMPLEMENTING IT- SWITCH CASE STATEMENT
int umar;
cout<<"Enter ur umar "<<endl;
cin>>umar;
switch (umar)
{
case 18:
    cout<<"You are 18."<<endl;
    break;//agr ye break nhi hota to uske baad wale saare print ho jate. 
    //like if we say age is 22 tab 22 wala case aur 22 ke baad wala case sab print ho jata.
    //break se wo pure ke pure ke pure program se bahar aa jayega.
case 22:
    cout<<"You are 22."<<endl;
    break;
case 2:
    cout<<"You are 2."<<endl;
    break;

default:
cout<<"No special cases."<<endl;
    break;
}
    return 0;
}