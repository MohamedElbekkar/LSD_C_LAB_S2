#include "header.h"
#define J 50

int main()
{
    int tab[J];
    rand_fill_table(tab,J);
    printTable(tab, J);
    int res = get_third_largest(tab, J);
    printf("%d", res);
    return 0;
}