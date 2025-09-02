//EXPERIMENT 11
//VAISHNAVI PANGARE
//ENTC A3
//25070123501
//Problem Statement- Write a codde to find area of rectangle using a class and method.


#include<iostream>
using namespace std;
 class Rectangle{
        public:
        float width;
        float length;
        void area(){
           float area=length*width;
           cout<<"Area of rectange is:"<<area<<endl;
} 
    }; 
 


int main(){
   

Rectangle R1;
R1.length=0;
R1.width=0;
cout<<"Length of rectangle is:"<<endl;
cin>>R1.length;
cout<<"Width of rectangle is:"<<endl;
cin>>R1.width; 
 
if(R1.length==R1.width){
    cout<<"It is a square."<<endl;
}else{
   R1.area();
   
}

    return 0;
}


/*Output:-
#for different dimensions
Length of rectangle is:
5
Width of rectangle is:
10
Area of rectange is:50


#for same dimensions
Length of rectangle is:
2
Width of rectangle is:
2
It is a square.

*/
