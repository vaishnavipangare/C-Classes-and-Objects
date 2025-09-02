//EXPERIMENT 11
//Name:- VAISHNAVI PANGARE
//ENTC - A3
//PRN- 25070123501
//Problem Statement- Write a code to display details of vehicles like car , bike using class.


#include <iostream>
using namespace std;
int main() {
    class Car{
        public:
        string name;
        string brand;
        string colour;
        string year;
        float cost;
    
    };
     class Bike{
        public:
        string name;
        string brand;
        string colour;
        string year;
        float cost;
    
    };

cout<<"The details of first car are:-"<<endl;    
Car c1;
c1.name="Name";
c1.brand="Brand";
c1.colour="Colour";
c1.year="Year";
c1.cost=0;
cout<<"Name:";
cin>>c1.name;
cout<<"Brand:";
cin>>c1.brand;
cout<<"Colour:";
cin>>c1.colour;
cout<<"Year of manufacture:";
cin>>c1.year;
cout<<"Amount:";
cin>>c1.cost;


cout<<"\nThe details of second car are:-"<<endl; 
Car c2;
c2.name="Name";
c2.brand="Brand";
c2.colour="Colour";
c2.year="Year";
c2.cost=0;
cout<<"Name:";
cin>>c2.name;
cout<<"Brand:";
cin>>c2.brand;
cout<<"colour:";
cin>>c2.colour;
cout<<"Year of manufacture:";
cin>>c2.year;
cout<<"Amount:";
cin>>c2.cost;    
    
Bike b1;
b1.name="Name";
b1.brand="Brand";
b1.colour="Colour";
b1.year="Year";
b1.cost=0;
cout<<"\nThe details of first bike are:-"<<endl; 
cout<<"Name:";
cin>>b1.name;
cout<<"Brand:";
cin>>b1.brand;
cout<<"colour:";
cin>>b1.colour;
cout<<"Year of manufacture:";
cin>>b1.year;
cout<<"Amount:";
cin>>b1.cost;


Bike b2;
b2.name="Name";
b2.brand="Brand";
b2.colour="Colour";
b2.year="Year";
b2.cost=0;
cout<<"\nThe details of second bike are:-"<<endl; 
cout<<"Name:";
cin>>b2.name;
cout<<"Brand:";
cin>>b2.brand;
cout<<"colour:";
cin>>b2.colour;
cout<<"Year of manufacture:";
cin>>b2.year;
cout<<"Amount:";
cin>>b2.cost;

return 0;
}


/*Output:-
The details of first car are:-
Name:Alto
Brand:Maruti
Colour:White
Year of manufacture:2011
Amount:560000

The details of second car are:-
Name:Aspire
Brand:Ford
colour:Black
Year of manufacture:2020
Amount:1100000

The details of first bike are:-
Name:Pulsar
Brand:Bajaj
colour:Black
Year of manufacture:2019
Amount:185000

The details of second bike are:-
Name:Apache
Brand:TVS
colour:Grey
Year of manufacture:2024
Amount:278000

*/
