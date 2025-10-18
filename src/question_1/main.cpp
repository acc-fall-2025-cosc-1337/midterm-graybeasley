#include "question1.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string dna1 = "GAGCCTACTAACGGGAT";
    string dna2 = "CATCGTAATGACGGCCT";

    double p_distance = get_dna_p_distance(dna1, dna2);

    cout << fixed << setprecision(4);
    cout << "P-distance: " << p_distance << endl;

    return 0;
}