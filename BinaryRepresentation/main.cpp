#include <iostream>
using namespace std;

void bin(long n) {
    long i;
    cout << "0"; // To indicate a binary number
    
    // For loop to iterate over 32 bits
    for (i = 1L << 31; i > 0; i = i / 2) {
        if ((n & i) != 0) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << endl;
}

int main() {
    
    long num;

    // Takes input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Checks if the input is a positive number
    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // bin() function to display the results of binary representation
    bin(num);

    return 0;
}
