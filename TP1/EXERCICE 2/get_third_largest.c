#include "header.h"


int  get_third_largest(int *tab, int size)
{
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<size;i++){
        if (tab[i]>a){
            c=b;
            b=a;
            a=tab[i];
        }
        if (tab[i]>b && tab[i]<a){
            c=b;
            b=tab[i];
        }
        if (tab[i]>c && tab[i]<b){
            c=tab[i];
        }
    }
    return c;
}