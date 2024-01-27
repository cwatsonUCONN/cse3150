#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define ARRAYSIZE(x) sizeof(x)/sizeof(x[0])

#include "doctest.h"
#include "prefix_sum.h"


int test_arr_0[] = {};
int test_arr_1[] = {1, -1, 1, -1};
int test_arr_2[] = {1, 2, 3, 4, 5};
int test_arr_3[] = {-1, -2, -3, -4, -5};

TEST_CASE("prefix sum"){

  // Check 0 sum
  CHECK(prefix_sum(test_arr_1, ARRAYSIZE(test_arr_1)) == 0);
  
  // Check positive sum
  CHECK(prefix_sum(test_arr_2, ARRAYSIZE(test_arr_2)) == 15);

  // Check negative sum
  CHECK(prefix_sum(test_arr_3, ARRAYSIZE(test_arr_3)) == -15);
}

TEST_CASE("Non-Negative Prefix Sum"){

  // Check for empty array
  CHECK(non_neg_prefix_sum(test_arr_0, 0));

  // Check for 0 sum prefix
  CHECK(non_neg_prefix_sum(test_arr_1, ARRAYSIZE(test_arr_1)));

  // Check for positive sum prefix  
  CHECK(non_neg_prefix_sum(test_arr_2, ARRAYSIZE(test_arr_2)));

  // Check negative sum (false) prefix
  CHECK_FALSE(non_neg_prefix_sum(test_arr_3, ARRAYSIZE(test_arr_3)));

}

TEST_CASE("Non-Positice Prefix Sum"){

   // Check for empty array
  CHECK_FALSE(non_pos_prefix_sum(test_arr_0, 0));

  // Check for 0 sum prefix
  CHECK_FALSE(non_pos_prefix_sum(test_arr_1, ARRAYSIZE(test_arr_1)));

  // Check for positive sum prefix  
  CHECK_FALSE(non_pos_prefix_sum(test_arr_2, ARRAYSIZE(test_arr_2)));

  // Check negative sum (false) prefix
  CHECK(non_pos_prefix_sum(test_arr_3, ARRAYSIZE(test_arr_3)));

}
