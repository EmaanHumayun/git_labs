#include <iostream>
using namespace std;
// struct  Student

// {
//     string name;
//     int roll ;
//     float gpa;

//     /* data */
// };
// int main(){
//     Student s;
//     cout<<"enter your name,roll, gpa";
//     cin>>s.name>>s.roll>>s.gpa;
//     cout<<"name"<<s.roll<<endl;
//      cout<<"roll"<<s.roll<<endl;
//       cout<<"gpa"<<s.gpa<<endl;
//       return 0;
// }
// struct Laptop
// {  string brand;
//     int ram;
//     float price;


//     /* data */
// };
// int main(){
//     Laptop l;
//     cout<< "enter brand, ram, price of laptop:";
//     cin>>l.brand >>l.ram,l.price;
//      cout<< "Brand: "<<l.brand<< endl;
//        cout<< "Ram: "<<l.ram<< endl;
//          cout<< "Price: "<< l.price<< "GB" <<endl;

//          return 0;

// }


// struct Rectangle {
//     float length;
//     float width;
// };

// int main() {
//     Rectangle r;

//     cout << "Enter length and width: ";
//     cin >> r.length >> r.width;

//     float area = r.length * r.width;
//     float perimeter = 2 * (r.length + r.width);

//     cout << "Area: " << area << endl;
//     cout << "Perimeter: " << perimeter << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter first student (name roll gpa): ";
    cin >> s1.name >> s1.roll >> s1.gpa;

    cout << "Enter second student (name roll gpa): ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa) {
        cout << "Higher GPA: " << s1.name << endl;
    }
    else if (s2.gpa > s1.gpa) {
        cout << "Higher GPA: " << s2.name << endl;
    }
    else {
        cout << "Both students have equal GPA" << endl;
    }

    return 0;
}