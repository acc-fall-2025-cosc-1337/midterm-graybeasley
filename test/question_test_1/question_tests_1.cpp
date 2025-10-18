#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_dna_p_distance function", "DNA") {
    //Test A
    REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == Approx(0.4118).margin(0.0001));

    //Test B
    REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == Approx(0.3529).margin(0.0001));
}