  
#include "header.h"


void    printTable(int *tab, int size)
{
    printf("Here is the array:\n");
    for ( int i = 0; i < size; i++)
    {
        printf("%d ",tab[i]);
    }
    return ;
}