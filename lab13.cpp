// // 
// #include <iostream>
// using namespace std;

// class Complex {
// public:
//     int r, i;

//     Complex(int a, int b) {
//         r = a;
//         i = b;
//     }

//     Complex operator+(Complex c) {
//         return Complex(r + c.r, i + c.i);
//     }

//     Complex operator-(Complex c) {
//         return Complex(r - c.r, i - c.i);
//     }

//     void display() {
//         cout << r << " + i" << i << endl;
//     }
// };

// int main() {

//     Complex c1(8, 4);
//     Complex c2(3, 2);

//     Complex add = c1 + c2;
//     Complex sub = c1 - c2;

//     cout << "Addition: ";
//     add.display();

//     cout << "Subtraction: ";
//     sub.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int a=0, int b=0) {
        r = a;
        i = b;
    }

    Complex operator+(Complex c) {
        return Complex(r + c.r, i + c.i);
    }

    Complex operator-(Complex c) {
        return Complex(r - c.r, i - c.i);
    }

    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {

    int r1, i1, r2, i2;

    cout << "Enter first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "\nFirst Complex: ";
    c1.display();

    cout << "Second Complex: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    return 0;
}