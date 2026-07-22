//MAKING A CLASS OF DOG;  GOT HW FROM tut21
#include<iostream>
using namespace std;

class Animal{
    private:
        int legs, eyes, ears;

    public:
        int sound, speed;
    void setData(int a1, int b1, int c1);
    void getData()
     {
        cout<<"The total legs are "<<legs<<endl;
        cout<<"The total eyes are "<<eyes<<endl;
        cout<<"The total ears are "<<ears<<endl;
        cout<<"The sound is "<<sound<<"Hz"<<endl;
        cout<<"The average speed is "<<speed<<"kmph"<<endl;
    }
};

void Animal :: setData(int a1, int b1, int c1){
    legs=a1;
    eyes=b1;
    ears=c1;
}


int main()
{
    Animal Dog;
    Dog.sound= 56;
    Dog.speed= 25;
    Dog.setData(4, 2, 2);

    Dog.getData();
    return 0;
}