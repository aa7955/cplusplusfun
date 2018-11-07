#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12};

    int i {0};
    int count {0};

    while (i < vec.size()) {
        if (vec.at(i) % 2 == 0) {
            count++;
        }
        i++;
    }

    cout << "The count is: " << count << endl;

    return 0;
}