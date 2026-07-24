#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;//By default class me sab kuch private hota hai. Man ho to likh lo private.

public:
    void read(void); // void means nothing, we can even leav vacant space thr.
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary no. " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();// Yahi hai nesting of function.
    //Another use of nested fn is tht---->
    //If we made any fn private it can't be called inside the main bcz it is out of the class, but it can be called by this type of nesting.

    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout<<"Displaying your binary no. "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // NESTING OF MEMBER FUNCTIONS
    binary b;
    b.read();
    //b.chk_bin(); //Now it's not needed bcz we already used nested funtion
    b.display();
    b.ones_compliment();
    cout<<endl;
    b.display();


    return 0;
}