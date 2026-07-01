// DESIGNING GRADING SYSTEM PROJECT
#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Check What Grades You Got On Basis Of Your Marks\n";
    cout<<"Enter your marks you got: ";
    cin>>marks;
    if (marks>=90 && marks<100)
    {
        cout<<"You got A grade.";
    }
    else if (marks==100)
    {
        cout<<"Congrats!! You got full marks and got grade A.";
    }
    else if (marks<0 || marks>100)
    {
        cout<<"Please enter a valid number.";
    }
    else if (marks>=75 && marks<=89)
    {
        cout<<"You got B grade.";
    }
    else if (marks>=40 && marks<=74)
    {
        cout<<"You got C grade.";
    }
    else
    {cout<<"Fail";}

    return 0;
}