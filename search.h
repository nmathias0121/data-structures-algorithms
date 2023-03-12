// Search Algorithms
#include <stdio.h>

// Linear search algorithm
// Time Complexity : O(n)
// Params : array, element to search in array, size of array
// Returns : index if element found, -1 otherwise
template <typename T>
int linear_search(T arr[], T element, size_t arr_size) {
    // empty array
    if ((int) arr_size == 0) { return -1; }
    
    for (int i = 0; i < (int) arr_size; i++){
        // if found
        if (arr[i] == element) {
            return i;
        }
    }
    // not found
    return -1;
} 

// Recursive Binary Search Algorithm
// Time complexity : O(log n)
// Params : sorted array, element to search in array, start index, end index
// Returns : index if element found, -1 otherwise
template <typename T>
int recursive_binary_search(T arr[], T element, int start, int end) {
    if (end >= start) {
        int mid = start + (end - start) / 2;
 
        // element is present at the middle
        if (arr[mid] == element)
            return mid;
 
        // element is smaller than mid, 
        if (arr[mid] > element)
            return recursive_binary_search(arr, element, start, mid - 1);
 
        // element can only be present
        return recursive_binary_search(arr, element, mid + 1, end);
    }
 
    return -1;
}

// Iterative Binary Search Algorithm
// Time complexity : O(log n)
// Params : sorted array, , element to search in array, start index, end index
// Returns : index if element found, -1 otherwise
template <typename T>
int iterative_binary_search(int arr[], T element, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
 
        // x is present at mid
        if (arr[mid] == element)
            return mid;
 
        // x greater, ignore left half
        if (arr[mid] < element)
            start = mid + 1;
 
        // x is smaller, ignore right half
        else
            end = mid - 1;
    }
 
    return -1;
}
