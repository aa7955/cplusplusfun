#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
using namespace std;
OR
std::cout, etc.
*/

int main() {
    int favorite_number;

    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing! That's my favorite number too!\n" << "No really!!, " << favorite_number << " is my favorite number!" << endl;
    return 0;
     
}