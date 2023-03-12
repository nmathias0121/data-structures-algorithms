#include "search.h"

int main() {

    int a[] = {2,3,4, 9,16, 17,42, 76, 77};
    char ch[] = {'a', 'b', 'd', 'n', 'k'};

    int size_a = sizeof(a) / sizeof(a[0]);
    int size_ch = sizeof(ch) / sizeof(ch[0]);
    int ls =linear_search<int>(a, 17, size_a);
    int lsch =linear_search<char>(ch, 'n', size_ch);

    int rbs = recursive_binary_search<int>(a, 17, 0, size_a - 1);

    int ibs = iterative_binary_search<int>(a, 16, 0, size_a - 1);

    printf("%d %d %d\n", lsch, rbs, ibs);
    return 0;
}