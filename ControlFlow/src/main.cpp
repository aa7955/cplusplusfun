#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // shipping cost calculator

    cout << "What are the dimensions?" << endl;

    const int max_dimension {10};
    double dimensions [3];

    cout << "Length: ";
    cin >> dimensions[0];

    cout << "Width: ";
    cin >> dimensions[1];

    cout << "Height: ";
    cin >> dimensions[2];

    if (dimensions[0] > max_dimension || dimensions[1] > max_dimension || dimensions[2] > max_dimension) {
        cout << "Sorry, we can't ship it!" << endl;
    } else {
        const double base_cost {2.5};
        const double tier_one_surcharge {0.10};
        const double tier_two_surcharge {0.25};
        const int tier_one_volume {100};
        const int tier_two_volume {500};

        double volume {dimensions[0] * dimensions[1] * dimensions[2]};

        double total {base_cost};
        cout << fixed << setprecision(2);

        if (volume > tier_one_volume && volume < tier_two_volume) {
            total += total * tier_one_surcharge;
            cout << "Your total is: $" << total << endl; 
        } else if (volume >= tier_two_volume) {
            total += total * tier_two_surcharge;
            cout << "Your total is: $" << total << endl;
        } else {
            cout << "Your total is: $" << total << endl;
        }
    }

    return 0;

}