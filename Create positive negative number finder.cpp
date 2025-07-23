# EXP-3A
//EXP-1 C++ BY Gandluri Sai Tejas
//PRN-24070123045

//EXPERIMENT 3A-CHECKING A NUMBER IS POSITIVE OR NOT

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

