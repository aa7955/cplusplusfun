#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1 {};
    vector<int> vector2 {};

    cout << "==============V1=================" << endl;

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << vector1.size() << endl;

    cout << "==============V2================" << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    cout << "===============2D===============" << endl;

    vector< vector<int> > vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector 1 - 0: " << vector_2d.at(0).at(0) << endl;
    cout << "vector 1 - 1: " << vector_2d.at(0).at(1) << endl;
    
    cout << "vector 2 - 0: " << vector_2d.at(1).at(0) << endl;
    cout << "vector 2 - 1: " << vector_2d.at(1).at(1) << endl;

    cout << "===============change vector1===============" << endl;

    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << "vector1 original: (not a copy) " << vector1.at(0) << endl;

    return 0;
}