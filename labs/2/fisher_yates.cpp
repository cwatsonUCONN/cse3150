#include <iostream>
#include "fisher_yates.h"

void print_array(int arr[], int len){
    for(int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_valid(int arr[], const int len){
    int sum = 0;

    for (int i = 0; i < len; i++){
        sum += arr[i];
        if (sum < 0) return false;
    }

    return (sum == 0);
}

void fisher_yates(int arr[], const int len, int(*rand_fn)()){
    for (int i = 0; i < len - 2; i++){
        int rand_idx = rand_fn() % (len - 1);
        swap(& arr[i], & arr[rand_idx]);
    }
}