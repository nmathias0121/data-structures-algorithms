# search-sort-algorithms
contains search &amp; sort algorithms for template data lists or arrays <br />

**Valgrind Memory Leaks Check** <br />
&emsp;running following command on terminal will generate a report (valgrind.txt) with memory leak information - <br />

&emsp;&emsp;valgrind --leak-check=full \ <br />
    &emsp;&emsp;&emsp;--show-leak-kinds=all \    <br />
    &emsp;&emsp;&emsp;--track-origins=yes \  <br />
    &emsp;&emsp;&emsp;--verbose \    <br />
    &emsp;&emsp;&emsp;--log-file=valgrind-out.txt \  <br />
    &emsp;&emsp;&emsp;./main <br />

**Search Algorithms** <br />
- Linear Search
- Recursive Binary Search (works on ascending sorted array only)
- Iterative Binary Search (works on ascending sorted array only)

**Sort Algorithms** <br />
- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Shell Sort