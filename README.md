# search-sort-algorithms
contains search &amp; sort algorithms for template data lists or arrays <br />

Valgrind Memory Leaks Check <br />
&nbsp;running following command on terminal will generate a report (valgrind.txt) with memory leak information - <br />
        valgrind --leak-check=full \ <br />
         --show-leak-kinds=all \    <br />
         --track-origins=yes \  <br />
         --verbose \    <br />
         --log-file=valgrind-out.txt \  <br />
         ./main <br />