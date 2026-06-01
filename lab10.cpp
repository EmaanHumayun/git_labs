// #include <iostream>
// using namespace std;

// class Rectangle
// {
//     int length, width;

// public:
//     // Constructor
//     Rectangle(int l, int w)
//     {
//         length = l;
//         width = w;
//     }

//     int area()
//     {
//         return length * width;
//     }
//       int perimeter() {
//         return 2 * (length + width);
//     }
// };

// int main()
//  { int l, w;

//     cout << "Enter Length: ";
//     cin >> l;

//     cout << "Enter Width: ";
//     cin >> w;

//     Rectangle r(l, w);

//     cout << "Area = " << r.area();
// {   Rectangle r1(4, 5);
//     Rectangle r2(6, 3);
//     Rectangle r3(8, 2);

//     cout << "Rectangle 1 Area = " << r1.area()
//          << " Perimeter = " << r1.perimeter() << endl;

//     cout << "Rectangle 2 Area = " << r2.area()
//          << " Perimeter = " << r2.perimeter() << endl;

//     cout << "Rectangle 3 Area = " << r3.area()
//          << " Perimeter = " << r3.perimeter() << endl;

//     return 0;
// }
// class Square{
//     int side;
//     public:
//     Square(int s){
//         side=s;

//     }
//     int area(){
//         return side*side;

//     }

// };
// int main(){
//     Square s(6);
//     cout << "area of square"<<s.area();
//     return 0;


// }
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, width;

// public:
//     Rectangle(int l, int w) {
//         length = l;
//         width = w;
//     }

//     int area() {
//         return length * width;
//     }
// };

// int main() {
//     Rectangle r1(4, 5);
//     Rectangle r2(8, 3);

//     if (r1.area() > r2.area())
//         cout << "Rectangle 1 has bigger area";
//     else if (r2.area() > r1.area())
//         cout << "Rectangle 2 has bigger area";
//     else
//         cout << "Both areas are equal";

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int rollNo;
//     float marks;

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student s;

//     s.name = "Emaan";
//     s.rollNo = 23072;
//     s.marks = 90;

//     s.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, width;

// public:
//     void input() {
//         cout << "Enter Length: ";
//         cin >> length;

//         cout << "Enter Width: ";
//         cin >> width;
//     }

//     void displayArea() {
//         cout << "Area = " << length * width;
//     }
// };

// int main() {
//     Rectangle r;

//     r.input();
//     r.displayArea();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Car {
//     string brand;
//     string model;
//     int year;

// public:
//     Car(string b, string m, int y) {
//         brand = b;
//         model = m;
//         year = y;
//     }

//     void display() {
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// int main() {
//     Car c("Toyota", "Corolla", 2023);

//     c.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    Calculator c;

    cout << "Addition = " << c.add(10, 5) << endl;
    cout << "Subtraction = " << c.subtract(10, 5);

    return 0;
}