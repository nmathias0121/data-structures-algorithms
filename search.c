#include "search.h"

int main() {

    int a[] = {2,3,4, 9,16, 17,42, 76, 77};

    int size_a = sizeof(a) / sizeof(a[0]);
    int ls =linear_search(a, size_a, 17);

    int rbs = recursive_binary_search(a, 0, size_a - 1, 17);

    int ibs = iterative_binary_search(a, 0, size_a - 1, 16);

    printf("%d %d %d", ls, rbs, ibs);
    return 0;
}