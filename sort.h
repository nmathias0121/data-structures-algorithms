// Sort Algorithms
#include <stdio.h>

// swap two elements of type T
template <typename T>
void swap(T *element1, T *element2) 
{ 
    T temp = *element1; 
    *element1 = *element2; 
    *element2 = temp; 
} 

// Selection sort algorithm
// Time Complexity : O(n^2)
// Params : array, element to search in array
// Returns : index if element found, -1 otherwise
template <typename T>
void selectionSort(T arr[], size_t arr_size) 
{ 
    int minimum_index; 
    // traverse array until second last element 
    for (int i = 0; i < arr_size-1; i++)
    {
        // minimum element in array
        minimum_index = i; 
        for (int j = i+1; j < arr_size; j++)
        {
          if (arr[j] < arr[minimum_index])   
          { minimum_index = j; }
        }

        // Swap minimum element with first element 
        if (minimum_index!=i)      
        { swap(&arr[minimum_index], &arr[i]); }
    }
} 