//Learnt to make user snippet.
//Go to gear icon chose user snippet thn cpp(c++)----> L11 t=1.17
#include<iostream>
using namespace std;

int main()
{
    //*****BREAK AND CONTINUE STATEMENTS******
    for (int i = 0; i < 10; i++)
    {
        if(i==2)
        {
            //break; sirf 2 tak hi print hoga
            continue; //skip kr dega 2 ko
            
        }
        cout<<i<<endl;
    }
    
    return 0;
}