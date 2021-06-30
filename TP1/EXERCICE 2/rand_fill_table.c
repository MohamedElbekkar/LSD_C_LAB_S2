  
#include "header.h"

void rand_fill_table(int *tab, int size)
{
    srand(time(0));
    for(int i=0;i<size;i++){
        tab[i]=rand();
    }
    return ;
}