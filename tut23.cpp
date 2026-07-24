#include <iostream>
using namespace std;

class Shop
{
    int itemId[100]; // Defined that it's arrays.
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice(void); // As told "void" likhon likho tumara man
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    for (int counter = 0; counter < 4; counter++)
    {
        dukaan.setPrice(); // Ye to loop chala diya maine, but ham ise apne according no. of time likh ke bhi kr skte hain
    }
    dukaan.displayPrice();
    return 0;
}