#include <iostream>
#include <vector>
#include "question4.h"
using namespace std;

int main()
{
    int cookies;
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        cout << "Enter number of cookies to bake: ";
        cin >> cookies;

        if (cookies <= 0)
        {
            cout << "Please enter a positive number.\n";
            continue;
        }

        vector<double> ingredients = get_cookie_ingredients(cookies);

        cout << "Cups of Sugar: " << ingredients[0] << endl;
        cout << "Cups of Butter: " << ingredients[1] << endl;
        cout << "Cups of Flour: " << ingredients[2] << endl;

        cout << "Do you want to enter another number? (y/n): ";
        cin >> again;
    }

    cout << "Exiting.\n";
    return 0;
}