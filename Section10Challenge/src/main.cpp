#include <iostream>
#include <string>

using namespace std;

int main() {

    const string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "The Cypher" << endl;
    cout << "Would you like to encode or decode a word (write encode or decode)? ";

    string choice {};
    getline(cin, choice);

    string word {};
    string output_word {};
    
    cout << "Give me the word: ";
    getline(cin, word);

    if (choice == "encode") {
        
        for (size_t i {0}; i < word.length(); i++) {
            size_t found_position = alphabet.find(word.at(i));
            if (found_position != std::string::npos) {
                output_word += key.at(found_position);
            } else {
                output_word += word.at(i);
            }
        }

        cout << output_word << endl;

    } else if (choice == "decode") {
        
        for (size_t i {0}; i < word.length(); i++) {
            size_t found_position = key.find(word.at(i));
            if (found_position != std::string::npos) {
                output_word += alphabet.at(found_position);
            } else {
                output_word += word.at(i);
            }
        }

        cout << output_word << endl;

    }

    return 0;
}