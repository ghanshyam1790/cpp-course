#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // COUNT IS STATIC VARIABLE OR STATIC DATA MEMBER

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // STATIC FUNCTION
    static void getCount(void)
    { // static fns has only access to static data members it can't access non static data members.
        // cout<< id; // This will throw error as id is non static data member
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // DEFINED AGAIN.. Default value to 0 hoti hai par yahan pe = laga ke jo chahe jo value rakho, upar me nhiiii krna

int main()
{
    Employee ghanshyam, harry, rohan;
    // ghanshyam.id = 1;
    // ghanshyam.count = 1;   //can't do this as id and count are private

    ghanshyam.setData();
    ghanshyam.getData();
    Employee::getCount(); // This is how we can call static function without creating object

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    return 0;
}