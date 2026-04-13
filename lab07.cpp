// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;
//     int *ptr = &num;

//     cout << "Value: " << num << endl;
//     cout << "Address: " << &num << endl;
//     cout << "Pointer Value: " << ptr << endl;
//     cout << "Dereferenced Value: " << *ptr << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 5, y = 10;

//     swap(&x, &y);

//     cout << "x = " << x << ", y = " << y;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int *ptr = new int;
//     *ptr = 25;

//     cout << "Value: " << *ptr << endl;

//     delete ptr;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int *arr = new int[5];

//     for(int i = 0; i < 5; i++) {
//         arr[i] = i + 1;
//     }

//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}