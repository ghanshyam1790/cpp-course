//LOCAL AND GLOBAL SCOPE, t=20.19 on utube
#include<iostream>
using namespace std;
int glo=48;
void sum(){
    cout<<glo;
}
int main(){
    int glo=5;
    sum();
    cout<<glo;//ye to ab local variable wise hi ans dega.
    cout<<::glo;//ye ab hame global operator hi ans dega bcz we used "::" scope resolution operator(lec7)
    return 0;
}
