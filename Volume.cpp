//EXPERIMENT - 11
// Name:- VAISHNAVI PANGARE
//PRN - 25070123501
//Class- ENTC A3
//Problem Statement :- Write a code to find volume of cuboid using class and objects and specifying a partocular method for it.


#include <iostream>
using namespace std;

class MyClass {
public:
    int height=12;
    int width=10;
    int length=4;
    void myVolume(); 
    
    void Volume(){
    cout << height*width*length;
    }
};


void MyClass::myVolume() {
    cout << height*width*length;
}

int main() {
    
    
    MyClass M1;

    M1.Volume();
    
    cout<<endl;
    
    M1.myVolume();

    return 0;
}




/* Output:
480
480
*/
