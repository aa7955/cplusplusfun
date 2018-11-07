#include <iostream>

using namespace std;

int main() {

    enum Direction {
        left = 'l', right = 'r', up = 'u', down = 'd'
    }; 

    //Direction heading {};
    
    cout << "Which direction (left, right, up down)? ";
    char selected_direction {};
    cin >> selected_direction;

    switch (selected_direction) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case up:
            cout << "Going up" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "no directions for that" << endl;        
    }

    cout << endl;

    return 0;
}