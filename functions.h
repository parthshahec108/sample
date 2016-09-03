/* Header files */
#include <stdlib.h>
#include <string.h>

/* Function declaration */
int* get_array(int size);
int sum_of_element(int* start_add, int length);
void decr(int* addr, int decr_by, int result, int* store_addr);

/* Function definition */

/* Get array of length size */
int* get_array(int size) 
{
	int* add = NULL;

	/* Define and initialize array of size 'size' */
	add = (int *)calloc(size,  sizeof(int *));

	return add;	
}

/* Sum of the elements of array with starting address start_add */
int sum_of_element(int* start_add, int length)
{
	int i = 0, sum = 0;

	/* Summation of the elements */
	for (i = 0; i < length; i++) {
		sum = sum + (*(start_add + i));		
	}	

	return sum;
}

void decr(int* addr, int decr_by, int result, int* store_addr)
{
	do {
		(*(addr)) = ((*(addr)) - decr_by);
	} while ((*(addr)) != result);

	(*store_addr) = (*(addr));

	return;
}

void incr(int* addr, int incr_by, int incr, int* store_addr)
{
	int compare = 0;
	compare = (*(addr)) + incr;

	do {
		(*(addr)) = ((*(addr)) + incr_by);
	} while ((*(addr)) != compare);

	(*store_addr) = (*(addr));

	return;
}
