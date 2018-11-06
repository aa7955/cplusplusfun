#include <iostream>

using namespace std;

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};

    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[sizeof(vowels)-1] << endl;

    double hi_temps [] {99.2, 103.4, 125.6, 113.4};
    cout << "First high temp: " << hi_temps[0] << endl;

    hi_temps[0] = 100;
    cout << "The first high temp is now: " << hi_temps[0] << endl;

    return 0;
}