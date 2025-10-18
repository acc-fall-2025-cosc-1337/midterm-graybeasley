#include <iostream>
#include <iomanip>
#include "question2.h"
using namespace std;

int main() {
    double sales;
    char choice;

    do {
        cout << "Enter sales amount: ";
        cin >> sales;

        double commission = get_sales_commission(sales);

        cout << fixed << setprecision(0);
        cout << "Sales of " << sales << " yields a commission of " << commission << "." << endl;

        cout << "Do you want to enter another sales amount? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}