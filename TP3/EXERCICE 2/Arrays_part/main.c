#include "header.h"

int main()
{
  	printf("Here is the first array: \n\t L = ");
	array L = rand_fill_array(20);
	affichageTableau(L);
	printf("Here is the second array: \n\t R = ");
	array R = rand_fill_array(15);
	affichageTableau(R);
	printf("We sort the first and the second arrays \"L\" and \"R\"\n\t L = ");
	triInsertion(&L);
	affichageTableau(L);
	return 0;
}