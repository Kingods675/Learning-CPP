// In this exercise you are asked to complete the provided skeleton C++ as detailed in the tasks below. The exercise relates to passing built-in arrays to functions. You are provided with the following files:

// main.cpp - sample code provided to help you develop your code. This is not used to test your code.
// task.h – header file (read only). Note: this file defines the constant ALLOCATED_LENGTH with value 20 which is used in your program to allocate space for a built in array (as in exercise 17.11).
// task.cpp – you will write your assessed C++ code in this file
// Task 1

// Implement the function:

// bool isSorted(const int *arr, const int logical_length, std::string order);
// The function has the following parameters:

// arr: A pointer to the first element of an array of integers.
// logical_length: The number of elements in the array.
// order: A string that specifies the sorting order. It can be either "ascending" or "descending".
// The function returns:

// true if the array is sorted according to the specified order ("ascending" or "descending").
// false:
// If the array is not sorted according to the specified order
// If order is not "ascending" or "descending"
// HINT one way to check if the array is sorted:

// Use a loop to iterate through the array elements
// Compare each element with the next one to ensure the array is in the specified order.
// For "ascending" order, check that each element is less than or equal to the next element.
// For "descending" order, check that each element is greater than or equal to the next element.
// If the loop continues to the end of the array and each pair of elements satisfy the check then the array is in sorted order.
// Example For the following:

// int arr[ALLOCATED_LENGTH] = {1, 2, 3, 4, 5};
// isSorted(arr, 5, "ascending")
// should return true

// Task 2

// Implement the following function which computes the prefix sum of an array:

// void prefixSumArray(const int* arr, int* prefix_sum, int logical_length);
// The function has the following parameters:

// arr: A pointer to an array of integers for which the prefix sums will be calculated.
// prefix_sum: A pointer to an array of integers where the prefix sums will be stored. This will be initialised to {0}
// logical_length: The logical length of the array.
// Details of the function:

// The function should compute the prefix_sum array from arr.
// The array prefix_sum should have the same length as arr, where each element at index i of prefix_sum is the sum of all elements from the beginning of arr up to index i.
// Example

// For the following

// int logical_length = 5;
// int arr[ALLOCATED_LENGTH] = {1, 2, 3, 4, 5};
// int prefix_sum[logical_length] = {0}; // Initialize prefix_sum with zeros
// the function should compute the following prefix_sum array:

//  {1, 3, 6, 10, 15}
// Each value in the prefix_sum array is computed as follows:

// prefix_sum[0] = arr[0]  
// prefix_sum[1] = arr[0] + arr[1]  
// prefix_sum[2] = arr[0] + arr[1] + arr[2]  
// prefix_sum[3] = arr[0] + arr[1] + arr[2] + arr[3] 
// prefix_sum[4] = arr[0] + arr[1] + arr[2] + arr[3] + arr[4]



//main.cpp
#include <iostream>
#include "task.h"

int main()
{
   /***********************************************************************
    * This code is provided as a starting point for development and testing
    * Please modify the code below as you develop your program.
    * **********************************************************************/

   int arr[ALLOCATED_LENGTH] = {1, 2, 3, 4, 5};
   isSorted(arr, 5, "ascending");
   
   int prefix_sum[ALLOCATED_LENGTH] = {0};  
   prefixSumArray(arr, prefix_sum, 5);

   return EXIT_SUCCESS;
}


//task.h
#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

const int ALLOCATED_LENGTH = 20; 
 
bool isSorted(const int *arr, const int logical_length, std::string order);
void prefixSumArray(const int *arr, int *prefix_sum, int logical_length);

#endif // TASK_H


//task.cpp
#include <iostream>
#include "task.h"

using namespace std;

bool isSorted(const int *arr, const int logical_length, std::string order) {
   
}