// Search Algorithms
#include <stdio.h>


// Linear search algorithm
// Time Complexity : O(n)
// Params : array, element to search in array, size of array
// Returns : index if element found, -1 otherwise
int linear_search(int arr[], size_t arr_size, int num) {
    // empty array
    if ((int) arr_size == 0) { return -1; }
    
    for (int i = 0; i < (int) arr_size; i++){
        // if found
        if (arr[i] == num) {
            return i;
        }
    }
    // not found
    return -1;
} 