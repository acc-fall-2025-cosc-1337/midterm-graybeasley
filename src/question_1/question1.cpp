#include "question1.h"
#include <iostream>
#include <cmath>
using namespace std;

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string& dna1, const string& dna2) {
    if (dna1.length() != dna2.length()) {
        cerr << "Error: DNA sequences must be of the same length." << endl;
        return 0.0;
    }

    int differences = 0;
    for (size_t i = 0; i < dna1.length(); ++i) {
        if (dna1[i] != dna2[i]) {
            differences++;
        }
    }

    double p_distance = static_cast<double>(differences) / dna1.length();
    return round(p_distance * 10000.0) / 10000.0; // round to 4 decimals
}