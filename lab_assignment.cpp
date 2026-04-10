// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Emaan" << endl;
//     cout << "Registration Number: 23072" << endl;
//     cout << "Course: Software Construction and Development" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     string name;
//     int roll;
//     float gpa;

//     for(int i = 1; i <= 3; i++) {
//         cout << "Enter details of student " << i << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> roll;
//         cout << "GPA: ";
//         cin >> gpa;

//         cout << "\nStudent " << i << " Details:" << endl;
//         cout << "Name: " << name << ", Roll: " << roll << ", GPA: " << gpa << endl;
//     }
//     return 0;
// }
// 
// #include <iostream>
// using namespace std;

// bool isArmstrong(int num) {
//     int original = num, sum = 0, digit;

//     while (num > 0) {
//         digit = num % 10;
//         sum += digit * digit * digit;
//         num /= 10;
//     }

//     return sum == original;
// }

// int main() {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;

//     if (isArmstrong(num))
//         cout << "Armstrong Number";
//     else
//         cout << "Not an Armstrong Number";

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10];

//     cout << "Enter 10 elements:\n";
//     for(int i = 0; i < 10; i++)
//         cin >> arr[i];

//     int max = arr[0], min = arr[0];

//     for(int i = 1; i < 10; i++) {
//         if(arr[i] > max) max = arr[i];
//         if(arr[i] < min) min = arr[i];
//     }

//     cout << "Max: " << max << endl;
//     cout << "Min: " << min << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10], key;

//     cout << "Enter 10 elements:\n";
//     for(int i = 0; i < 10; i++)
//         cin >> arr[i];

//     cout << "Enter value to search: ";
//     cin >> key;

//     for(int i = 0; i < 10; i++) {
//         if(arr[i] == key) {
//             cout << "Found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Not Found";
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10], key;

//     cout << "Enter 10 elements:\n";
//     for(int i = 0; i < 10; i++)
//         cin >> arr[i];

//     cout << "Enter value to search: ";
//     cin >> key;

//     for(int i = 0; i < 10; i++) {
//         if(arr[i] == key) {
//             cout << "Found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Not Found";
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 elements:\n";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}