// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     cin >> str;

//     cout << "Total characters: " << str.length();

//     return 0;
// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     cin >> str;

//     for(int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }

//     cout << "Uppercase string: " << str;

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     cin >> str;

//     if(str[0] == str[str.length() - 1]) {
//         cout << "First and last characters are SAME";
//     } else {
//         cout << "First and last characters are DIFFERENT";
//     }

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName;

    return 0;
}