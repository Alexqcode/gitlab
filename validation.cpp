#include <iostream>
#include <string>
using namespace std;

bool validateInput(string input) {
    return !input.empty();
}

void validationExample() {
    string test = "test";
    if (validateInput(test)) {
        cout << "Validation passed!" << endl;
    }
}
