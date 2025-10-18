#include <iostream>
#include "question3.h"
using namespace std;

int main() {
    int n;
    char choice;

    do {
        cout << "Enter a number (1-15): ";
        cin >> n;

        if(n < 1 || n > 15) {
            cout << "Invalid input. Please enter a number between 1 and 15.\n";
            continue;
        }

        int fib = get_fib_number(n);
        cout << "Fibonacci number for " << n << " is " << fib << endl;

        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}