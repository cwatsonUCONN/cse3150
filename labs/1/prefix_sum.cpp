#include "prefix_sum.h"

int prefix_sum(int arr[], int len){
  int sum = 0;
  for(int i = 0; i < len; i++){
    sum += arr[i];
  }

  return sum;
}

bool non_neg_prefix_sum(int* arr, int len){
  return prefix_sum(arr, len) >= 0;  
}

bool non_pos_prefix_sum(int* arr, int len){
  return prefix_sum(arr, len) < 0;  
}
