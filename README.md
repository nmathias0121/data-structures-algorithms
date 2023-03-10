# search-sort-algorithms
contains search &amp; sort algorithms for template data lists / arrays

Valgrind Memory Leaks Check
    running following command on terminal will generate a report (valgrind.txt) with memory leak information -
        valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./main