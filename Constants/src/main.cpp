#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    cout << "Welcome to Abdullah's Carpet Cleaning Service!" << endl;
    cout << "How many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {32.50};
    const double tax_rate {0.06};
    const int estimate_exp_days {30};

    double cost = price_per_room * number_of_rooms;
    double tax = cost * tax_rate;
    double total_cost = cost + tax;

    // the printed estimate 

    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl; // price per room
    cout << "Cost: $" << cost << endl; // cost
    cout << "Tax: $" << tax << endl; // tax - float
    cout << "============================" << endl;
    cout << "Total estimate: $" << total_cost << endl; // total estimate
    cout << "This estimate is valid for " << estimate_exp_days << " days" << endl; // validity

}