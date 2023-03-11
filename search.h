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

// Recursive Binary Search Algorithm
// Time complexity : O(log n)
// Params : sorted array, start index, end index, element to search in array
// Returns : index if element found, -1 otherwise
int recursive_binary_search(int arr[], int start, int end, int num) {
    if (end >= start) {
        int mid = start + (end - start) / 2;
 
        // element is present at the middle
        if (arr[mid] == num)
            return mid;
 
        // element is smaller than mid, 
        if (arr[mid] > num)
            return recursive_binary_search(arr, start, mid - 1, num);
 
        // element can only be present
        return recursive_binary_search(arr, mid + 1, end, num);
    }
 
    return -1;
}

// Iterative Binary Search Algorithm
// Time complexity : O(log n)
// Params : sorted array, start index, end index, element to search in array
// Returns : index if element found, -1 otherwise
int iterative_binary_search(int arr[], int start, int end, int num) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
 
        // x is present at mid
        if (arr[mid] == num)
            return mid;
 
        // x greater, ignore left half
        if (arr[mid] < num)
            start = mid + 1;
 
        // x is smaller, ignore right half
        else
            end = mid - 1;
    }
 
    return -1;
}
