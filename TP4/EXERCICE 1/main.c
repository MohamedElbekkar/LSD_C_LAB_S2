#include "my_functions.h"
#include "header.h"

int main() {
    tree B1 = makeTree(5, NULL, NULL);
    tree B2 = makeTree(18, NULL, NULL);
    tree B3 = makeTree(48, NULL, NULL);
    tree A1 = makeTree(4, B1, B2);
    tree A2 = makeTree(9, B3, NULL);
    tree A = makeTree(15, A1, A2);
    printf("depth : %d\n", tree_depth(A));
    printf("diam : %d\n", tree_diameter(A));
    printf("leaf sum: %d\n", leaf_sum(A));
    return 0;
}