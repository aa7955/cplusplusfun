#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
using std::vector;

int main() {
	
	vector<int> numbers {}; 
    bool run_program {true};

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "D - Remove duplicate entries" << endl;  
        cout << "Q - Quit" << endl;

        cout << "Enter your choice: ";

        char user_selection {};
	    cin >> user_selection;

        switch (user_selection) {
			case 'P':
			case 'p':
                if (numbers.size() == 0) {
                    cout << "[] - the list is empty";
                    cout << endl;
                    continue;
                } 
                cout << "[ ";
				for (unsigned int i {0}; i < numbers.size(); i++ ) {
					cout << numbers.at(i) << " ";
				}
                cout << "]";
                cout << endl;
                cout << endl;
                continue;
	    	case 'A':
			case 'a': {
				cout << "Enter a number to add: ";
				int new_number {};
				cin >> new_number;

				numbers.push_back(new_number);

				cout << new_number << " added" << endl;
                cout << endl;
				continue;
			}
            case 'M':
            case 'm': {
                if (numbers.size() == 0) {
                    cout << "Unable to calculate the mean - no data" << endl;
                    cout << endl;
                    continue;
                }
                double total_of_vector {0};

                for (unsigned int i {0}; i < numbers.size(); i++) {
                    total_of_vector += numbers.at(i);
                }

                double mean {total_of_vector / numbers.size()};
                cout << "The mean is: " << mean << endl;
                cout << endl;
                continue;
            }
            case 'S':
            case 's': {
                if (numbers.size() == 0) {
                    cout << "Unable to determine the smallest number - the list is empty" << endl;
                    cout << endl;
                    continue;
                }
                double smallest {};
                for (unsigned int i {1}; i < numbers.size(); i++) {
                    smallest = numbers.at(0);
                    if (smallest > numbers.at(i)) {
                        smallest = numbers.at(i);
                    }
                }
                cout << "The smallest number is " << smallest << endl;
                cout << endl;
                continue;
            }
            case 'L':
            case 'l': {
                if (numbers.size() == 0) {
                    cout << "Unable to determine the largest number - the list is empty" << endl;
                    cout << endl;
                    continue;
                }
                double largest {};
                for (unsigned int i {1}; i < numbers.size(); i++) {
                    largest = numbers.at(0);
                    if (largest < numbers.at(i)) {
                        largest = numbers.at(i);
                    }
                }
                cout << "The largest number is " << largest << endl;
                cout << endl;
                continue;
            }
            case 'C':
            case 'c':
                if (numbers.size() == 0) {
                    cout << "The list is already empty" << endl;
                    cout << endl;
                    continue;
                }
                numbers.clear();
                cout << "The list is cleared" << endl;
                cout << endl;
                continue;
            case 'D':
            case 'd': {
                // using an unordered set we'll erase the duplicates
                unordered_set<double> s {};
                auto end = remove_if(numbers.begin(), numbers.end(), [&s](int const &i) {
                    return !s.insert(i).second;
                });
                numbers.erase(end, numbers.end());
                // show the list
                cout << "[ ";
				for (unsigned int i {0}; i < numbers.size(); i++ ) {
					cout << numbers.at(i) << " ";
				}
                cout << "]";
                cout << endl;
                cout << endl;
                continue;
            } 
			case 'Q':
			case 'q':
				run_program = false;
				break;
			default:
				cout << "Unknown selection. Please try again" << endl;
                cout << endl;
				continue;
		}       
    } while (run_program != false);
    
	return 0;
}