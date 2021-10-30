// Program to find factorial

#include <iostream>
using namespace std;

int main() {      // Main Function
    int n;
    long double factorial = 1.0;    // Initialization

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
}

// End of Program
