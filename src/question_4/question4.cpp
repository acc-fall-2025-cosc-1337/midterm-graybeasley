#include "question4.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    // Recipe for 48 cookies
    const double SUGAR_48 = 1.5;
    const double BUTTER_48 = 1.0;
    const double FLOUR_48 = 2.75;

    // Scaling factor
    double scale = static_cast<double>(cookies) / 48.0;

    // Calculate each ingredient
    double sugar = SUGAR_48 * scale;
    double butter = BUTTER_48 * scale;
    double flour = FLOUR_48 * scale;

    // Return all values in a vector
    return { sugar, butter, flour };
}