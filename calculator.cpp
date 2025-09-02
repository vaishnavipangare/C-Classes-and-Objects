//EXPERIMENT 11
//VAISHNAVI PANGARE
//PRN- 25070123501
//ENTC A3
//Problem Statement:- Write a code to form a calculator using class and methods.


#include <iostream>
using namespace std;

class Calculator {
public:         
    float a;
    float b;

    void addition() {
        float sum = a + b;
        cout << "The sum is: " << sum << endl;
    }

    void subtraction() {
        float diff = a - b;
        cout << "The difference is: " << diff << endl;
    }

    void multiplication() {
        float product = a * b;
        cout << "The product is: " << product << endl;
    }

    void division() {
        if (b != 0) {
            float quotient = a / b;
            cout << "The quotient is: " << quotient << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    Calculator C1;

    cout << "Enter the value of a: ";
    cin >> C1.a;
    cout << "Enter the value of b: ";
    cin >> C1.b;

    C1.addition();
    C1.subtraction();
    C1.multiplication();
    C1.division();

    return 0;
}


/*Output:-

Enter the value of a: 6
Enter the value of b: 9
The sum is: 15
The difference is: -3
The product is: 54
The quotient is: 0.666667

*/
