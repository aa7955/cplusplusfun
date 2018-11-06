#include <iostream>

using namespace std;

int main() {

    cout << "Enter an integer representing the number of cents: " << endl;

    int cents {50};

    cin >> cents;

    int dollars {0};
    dollars = cents / 100;
    cents -= dollars * 100;

    int quarters {0};
    quarters = cents / 25;
    cents -= quarters * 25;

    int dimes {0};
    dimes = cents / 10;
    cents -= dimes * 10;

    int nickles {0};
    nickles = cents / 5;
    cents -= nickles * 5;

    int pennies {0};
    pennies = cents / 1;
    cents -= pennies * 1;

    cout << "Dollars: " <<  dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}