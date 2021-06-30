#include "functions.h"
#include "functions.c"


int main()
{
	t_stack * t1 = new_stack(10);
	print_stack(t1);
	push(&t1,15);
	int x = stack_len(t1);
	int y = peek_stack(t1);
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}