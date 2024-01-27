#include <iostream>

#include "prefix_sum.h"

bool non_neg_prefix_sum(int* arr, int len){
  int sum = 0;
  for(int i = 0; i < len; i++){
    sum += arr[i];
    if(sum < 0) return false;
  }

  return true;
}

bool non_pos_prefix_sum(int* arr, int len){
  int sum = 0;
  for(int i = 0; i < len; i ++){
    sum += arr[i];
    if(sum > 0) return false;
  }

  return true;
}

int main(){

  int arr[] = {1,-1,1,-1};

  if(non_neg_prefix_sum(arr, 4)){
    std::cout << "Array has a non negative prefix sum!" << std::endl;
  }

 if(non_pos_prefix_sum(arr,4)){
   std::cout << "Array has a non positive prefix sum!" << std::endl;
 }

  return 0;
}
