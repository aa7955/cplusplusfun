#include <iostream>
#include <vector>

using std::vector;
using namespace std;

int main() {

    vector<int> some_numbers {100, 122, 3, 4, 1, 1223};

    cout << some_numbers.size() << endl;

    //cout << "number 1: " << some_numbers[1] << endl;

    // some_numbers.at(1) = 450;

    // cout << "new number 1: " << some_numbers[1] << endl;

    // cout << "last number: " << some_numbers[sizeof(some_numbers)-1] << endl;

    // some_numbers.push_back(5000);

    // cout << "new last number: " << some_numbers[sizeof(some_numbers)-1] << endl;

    // cout << "first number: " << some_numbers[0] << endl;

    // //some_numbers.pop_back(1000);

    // cout << "new first: " << some_numbers[0] << endl;

    return 0;
}