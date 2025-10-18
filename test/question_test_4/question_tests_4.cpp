#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Ingredient calculation for cookies", "[get_cookie_ingredients]")
{
    // 48 cookies
    vector<double> result = get_cookie_ingredients(48);
    REQUIRE(result[0] == Approx(1.5));
    REQUIRE(result[1] == Approx(1.0));
    REQUIRE(result[2] == Approx(2.75));

    // 96 cookies
    result = get_cookie_ingredients(96);
    REQUIRE(result[0] == Approx(3.0));
    REQUIRE(result[1] == Approx(2.0));
    REQUIRE(result[2] == Approx(5.5));

    // 24 cookies
    result = get_cookie_ingredients(24);
    REQUIRE(result[0] == Approx(0.75));
    REQUIRE(result[1] == Approx(0.5));
    REQUIRE(result[2] == Approx(1.375));
}