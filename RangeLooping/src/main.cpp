#include <iostream>

using namespace std;

int main() {

    string sentence {"this is a sentence."};

    for (auto c: sentence) {
        cout << c;
    }

    return 0;
}