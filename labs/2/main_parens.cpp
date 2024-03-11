#include <iostream>
#include <random>
#include "fisher_yates.h"



int main() {
    std::srand(time(0));

    const int num_trials = 2500000;
    int n;
    int num_valid = 0;

    std::cout << "n: ";
    std::cin >> n;

    for (int trial = 0; trial < num_trials; trial++){
        // Create array size 2n
        int list[2 * n];

        // Fill first half of array with 1, second half with -1
        for (int i = 0; i < n; i++) {
            list[i] = 1;
            list[i + n] = -1;
        }

        fisher_yates(list, 2 * n, std::rand);
        // print_array(list, 2 * n);

        if (is_valid(list, 2 * n)) num_valid++;
    }

    std::cout << "Lists Generated: " << num_trials << std::endl;
    std::cout << "Valid Lists: " << num_valid << std::endl;
    std::cout << "Proportion of well-balanced lists: "  << (double)num_valid/num_trials << std::endl;

    return 0;
}