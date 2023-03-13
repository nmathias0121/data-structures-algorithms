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
// Params : array, size of array
template <typename T>
void selection_sort(T arr[], size_t arr_size) 
{ 
    int min_index; 
    // traverse array until second last element 
    for (int i = 0; i < arr_size-1; i++)
    {
        // minimum element in array
        min_index = i; 
        for (int j = i+1; j < arr_size; j++)
        {
          if (arr[j] < arr[min_index])   
          { min_index = j; }
        }

        // Swap minimum element with first element 
        if (min_index!=i)      
        { swap(&arr[min_index], &arr[i]); }
    }
} 

// Bubble sort algorithm
// Time Complexity : O(n^2)
// Params : array, size of array
template <typename T>
void bubble_sort(T arr[], size_t arr_size)
{
    // traverse array until second last element
    for (int i = 0; i < arr_size - 1; i++) {
        for (int j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap neighboring elements if not sorted accordingly
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}