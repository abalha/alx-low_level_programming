#include "main.h"

/**
 * swap_int - swap the value of two integer
 *
 *@numb1: first integer as parameter
 *
 *@numb2: second integer as parameter
 *
 */
void swap_int(int *numb1, int *numb2)
{
	int temp;

	temp = *numb1;
	*numb1 = *numb2;
	*numb2 = temp;

}
