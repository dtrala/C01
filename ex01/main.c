#include <stdio.h>
#include "print.h"

void	ft_ultimate_ft(int *********nbr);
void	print_res(int exp, int res);
void	test(int exp);
void	test2(int ****ptr4);

int	main(void)
{
	test(42);
	return (0);
}

void	test(int exp)
{
	int	nbr;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;

	printf("Testing\n");
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	test2(ptr4);
	print_res(exp, nbr);
}

void	test2(int ****ptr4)
{
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
}

void	print_res(int exp, int res)
{
	print_int("Expecting: %d\n", BLU, exp);
	if (exp == res)
		print("OK\n", GRN);
	else
		print_int("NOT OK, got: %d\n", RED, res);
	printf("=============================================\n\n");
}
