#include <iostream>

using namespace std;

int main() {

    cout << "Abdullah's Carpet Cleaning Service" << endl;

    cout << "How many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;

    const double price_per_room_small {25.0};
    const double price_per_room_large {35.0};
    const double tax_rate {0.06};
    const int estimate_exp_days {30};

    double cost_small {price_per_room_small * small_rooms};
    double cost_large {price_per_room_large * large_rooms};
    double sub_total_cost {cost_small + cost_large};

    double total_tax {sub_total_cost * tax_rate};
    double total_cost {sub_total_cost + total_tax};

    // the printed estimate 

    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_room_small << endl;
    cout << "Price per large room: $" << price_per_room_large << endl; 
    cout << "Cost: $" << sub_total_cost << endl; 
    cout << "Tax: $" << total_tax << endl; 
    cout << "============================" << endl;
    cout << "Total estimate: $" << total_cost << endl; 
    cout << "This estimate is valid for " << estimate_exp_days << " days" << endl; 

}