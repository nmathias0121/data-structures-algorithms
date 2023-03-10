# search-sort-algorithms
contains search &amp; sort algorithms for template data lists or arrays <br />

Valgrind Memory Leaks Check <br />
&emsp;running following command on terminal will generate a report (valgrind.txt) with memory leak information - <br />

&emsp;&emsp;valgrind --leak-check=full \ <br />
    &emsp;&emsp;--show-leak-kinds=all \    <br />
    &emsp;&emsp;--track-origins=yes \  <br />
    &emsp;&emsp;--verbose \    <br />
    &emsp;&emsp;--log-file=valgrind-out.txt \  <br />
    &emsp;&emsp;./main <br />