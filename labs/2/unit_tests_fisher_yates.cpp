#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "fisher_yates.h"

TEST_CASE("Swap") {
    int one = 1;
    int orig_one = one;
    int two = 2;
    int orig_two = two;

    swap(& one, & two);

    CHECK_EQ(one, orig_two);
    CHECK_EQ(two, orig_one);
}

TEST_CASE("Fisher-Yates") {
    int arr_test1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_test2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_test3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_orig[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int (* random_fn)() = std::rand;

    std:srand(0);


    SUBCASE("Same Length") {
        fisher_yates(arr_test1, sizeof(arr_test1)/sizeof(arr_test1[0]), random_fn);
        CHECK_EQ(sizeof(arr_test1)/sizeof(arr_test1[0]), sizeof(arr_orig)/sizeof(arr_orig[0]));
    }

    SUBCASE("Shuffle") {
        fisher_yates(arr_test2, sizeof(arr_test2)/sizeof(arr_test2[0]), random_fn);
        
        // print_array(arr_test2, sizeof(arr_test2)/sizeof(arr_test2[0]));
        // print_array(arr_orig, sizeof(arr_orig)/sizeof(arr_orig[0]));

        bool different = false;
        for (int i = 0; i < sizeof(arr_test2)/sizeof(arr_test2[0]); i++){
            if (arr_test2[i] != arr_orig[i])
                different = true;
        }
        CHECK(different);
    }
}