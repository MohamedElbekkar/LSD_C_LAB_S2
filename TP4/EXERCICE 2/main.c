#include "my_functions.h"
#include "header.h"

int main() {
    tree B1 = makeTree(5, NULL, NULL);
    tree B2 = makeTree(13, NULL, NULL);
    tree B3 = makeTree(18, NULL, NULL);
    tree A1 = makeTree(11, B1, B2);
    tree A2 = makeTree(19, B3, NULL);
    tree A = makeTree(15, A1, A2);
    print2D(A);
    insert(&A, 17);
    print2D(A);
    printf("%d\n", search(4, A));
    printf("%d\n", search(17, A));
    printf("%d\n", max_depth(A));
    printf("%d\n", tree_size(A));
    return 0;
}