#include "my_functions.h"
#include "header.h"

int main() {
    tree B3 = makeTree(4, NULL, NULL);
    tree A1 = makeTree(3, NULL, B3);
    tree A2 = makeTree(2, NULL, A1);
    tree A = makeTree(1, NULL, A2);
    print2D(A);
    AVL(&A);
    print2D(A);
    return 0;
}