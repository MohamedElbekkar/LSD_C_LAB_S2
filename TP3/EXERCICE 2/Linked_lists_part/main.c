#include "header.h"
#include "my_functions.c"

int main()
{
	liste l1 =NULL;
	liste l2 = NULL;
	int i = 0;
	for(i=0 ; i<5 ; i++)
	{
		int x = rand();
		ajoutDebut(x , &l1);
	}
	int j = 0;
	for(j=0 ; j<3 ; j++)
	{
		int y = rand();
		ajoutDebut(y , &l2);
	}
	affichageListe(l1);
	affichageListe(l2);
	liste T=NULL;
	T=merge2(l1,l2);
	affichageListe(T);
	return 0;
}