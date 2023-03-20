// Sort Algorithms
#include <stdio.h>

/************************* Helper Functions *********************/
// swap two elements of type T
template <typename T>
void swap(T *element1, T *element2) 
{ 
    T temp = *element1; 
    *element1 = *element2; 
    *element2 = temp; 
} 

// merges two subarrays (for merge sort)
// used for merge sort
template <typename T>
void merge(T arr[], int start, int mid, int end)
{
    int i, j, k;
    // first subarray
    int len_subarr_1 = mid - start + 1;
    T subarr_1[len_subarr_1];
    for (i = 0; i < len_subarr_1; i++)
        subarr_1[i] = arr[start + i];

    // second subarray
    int len_subarr_2 = end - mid;
    T subarr_2[len_subarr_2];
    for (j = 0; j < len_subarr_2; j++)
        subarr_2[j] = arr[mid + 1 + j];
  
    // merge sub arrays into arr[start:end]
    i = 0;
    j = 0;
    k = start;
    while (i < len_subarr_1 && j < len_subarr_2) {
        if (subarr_1[i] <= subarr_2[j]) {
            arr[k] = subarr_1[i];
            i++;
        }
        else {
            arr[k] = subarr_2[j];
            j++;
        }
        k++;
    }
  
    // copy remaining elements of subarr_1[]
    while (i < len_subarr_1) {
        arr[k] = subarr_1[i];
        i++;
        k++;
    }
  
    // copy remaining elements of subarr_2[]
    while (j < len_subarr_2) {
        arr[k] = subarr_2[j];
        j++;
        k++;
    }
}

// partition using the last element (for quick sort)
// arr elements < last element in left partition
// arr elements > last element in right partition
template <typename T>
int partition(T arr[], int start, int end)
{
    int pivot = arr[end];       //set last element as pivot
    int i = (start - 1); 
  
    for (int j = start; j <= end - 1; j++) {
        // current element less than pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            // move greater element to the right/end of array by swapping
            T tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        //else move forward in array with respect to j without changing i, arr[j] will end up in right partition
    }
    T tmp = arr[i+1];
    arr[i+1] = arr[end];
    arr[end] = tmp;
    
    return (i + 1);
}

/************************* End Of Helper Functions *********************/

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
            // swap neighboring elements if not sorted accordingly
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Insertion sort algorithm
// Time Complexity : O(n^2)
// Params : array, size of array
template <typename T>
void insertion_sort(T arr[], size_t arr_size)
{
    int j = 0;
    T key;

    // start i from 1 to consider j = 0
    for (int i = 1; i < arr_size; i++)
    {
        // store current element in key
        key = arr[i];
        j = i - 1;      // arr[j] is previous element

        // Move all elements in arr[0..i-1] > key in higher indices than the key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;         // either arr[j] <= key or key is assigned to 0 index in array 
    }
}


// Merge sort algorithm
// Time Complexity : O(nlog(n))
// Params : array, start, end indices
template <typename T>
void merge_sort(T arr[], int start, int end)
{
    if (start < end) {
        int mid = start + (end - start) / 2;
  
        // break down array to smallest parts through recursion
        merge_sort(arr, start, mid);         // sort first half of array
        merge_sort(arr, mid + 1, end);       // sort second half of array
  
        merge(arr, start, mid, end);        // merge two sorted arrays
    }
}
  
// Quick sort algorithm
// Time Complexity : O(n^2)
// Params : array, start, end indices
template <typename T>
void quick_sort(T arr[], int start, int end)
{
    if (start < end) {
        // partition using the last element
        // arr elements < last element in left partition
        // arr elements > last element in right partition
        int pivot = partition(arr, start, end);
  
        // Separately sort elements for left & right partitions
        quick_sort(arr, start, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
}
