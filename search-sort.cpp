#include "search.h"
#include "sort.h"

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

    int k[] = {77, 45, 23, 44, 12, 3};
    char kch[] = {'z', 's', 'd', 'b', 'k', 'a'};
    shell_sort(kch, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%c", kch[i]);
    }
    bubble_sort(k, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d", k[i]);
    }
    selection_sort(k, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d", k[i]);
    }
    return 0;
}