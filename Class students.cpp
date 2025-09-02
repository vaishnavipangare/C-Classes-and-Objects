//EXPERIMENT 11
//Name:- VAISHNAVI PANGARE
//PRN:- 25070123501
//Class - ENTC- A3
//Problem Statement- Write a code by making a class to print details of students.


#include<iostream>
using namespace std;

int main(){
    class Student{
        public:
        string name;
        string branch;
        string subject;
        string year;
        float result;
        
    }; 
 
 cout<<"Student 1 details are:"<<endl;
 Student s1;
 s1.name="Palak Soni";
 s1.branch="ENTC";
 s1.subject="Data Structure with C++.";
 s1.result=9.9;
 cout<<s1.name<<endl;
 cout<<s1.branch<<endl;
 cout<<s1.subject<<endl;
 cout<<s1.result<<endl;
 
 cout<<"Student 2 details are:"<<endl;
 Student s2;
 s2.name="Aisha Bhatt";
 s2.branch="CS";
 s2.subject="Data Structure with Python.";
 s2.result=9.5;
 cout<<s2.name<<endl;
 cout<<s2.branch<<endl;
 cout<<s2.subject<<endl;
 cout<<s2.result<<endl;
 
    return 0;
}



/*Output:-

Student 1 details are:
Palak Soni
ENTC
Data Structure with C++.
9.9
Student 2 details are:
Aisha Bhatt
CS
Data Structure with Python.
9.5

*/
