// EXPERIMENT - 11
// VAISHNAVI PANGARE
// 25070123501
// ENTC A3
//Problem Statement:- Find and fix the error in the code of class to calculate volume.


#include <iostream>
using namespace std;
class cube{
       public:
    double height=23.23;
    double width=333.043;
    double length=330.4;

    double volume(){
        double v;
        v=height*width*length;
        return v;
    }
    };
    int main(){
        cube cube1;
        double vol=cube1.volume();
        double height=cube1.height;
        cout<<"Height:- "<<height;
        cout<<"\nVolume:-"<<vol<<endl;
        return 0;
    }



/*Output:-
Height:- 23.23
Volume:-2.55617e+06
*/
